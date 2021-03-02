import json

# Tables taken from reference.html (credits to: https://www.pastraiser.com/cpu/gameboy/gameboy_opcodes.html)

def process_row(row_dict):
    row = list(row_dict.values())
   
    row_id = row[0]

    result = []
    for r in row[1:]:
        op_details = {}
        if r == "":
            details = ["NOP", "", ""]
        else:
            details = r.split("\n")

        op_details["op"]   = details[0]
        op_details["time"] = details[1]
        op_details["reg"]  = details[2]
        result.append(op_details)
    return row_id.lower(), result

def process_table(file_name):
    table = json.load(open(file_name, "r"))

    FINAL_RESULT = {}
    COLUMNS = [i.lower() for i in list(table[0].values())[1:]]
    FINAL_RESULT["columns"] = COLUMNS

    for row in table[1:]:
        row_id, processed_row = process_row(row)
        FINAL_RESULT[row_id] = processed_row

    print(json.dumps(FINAL_RESULT))


if __name__ == "__main__":
    process_table("raw_mapping_prefix_cb.json")
    #process_table("raw_mapping_normal_ops.json")