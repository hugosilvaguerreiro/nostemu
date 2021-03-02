import json

ROM = "../../roms/totally_not_pokemon_rom.gb"


normal_mapping = json.load(open("mappings/normal_ops.json", "r"))
prefix_cp_mapping = json.load(open("mappings/prefix_cb.json", "r"))

def get_operation(mapping, opcode):
    row =  opcode[0] + "x"
    col =  "x" + opcode[1]

    col_i = mapping["columns"].index(col)
    translated_op = mapping[row][col_i]

    return translated_op

with open(ROM, "rb") as f:
    byte = f.read(1)
    while byte != b"":
        operation = byte.hex()
        
        if operation == "CB":
            print("PREFIX CB")
            byte = f.read(1) #read next instruction
            operation = byte.hex()
            translated_op = get_operation(prefix_cp_mapping, operation)

        else:   
            translated_op = get_operation(normal_mapping, operation)            
        
        print(translated_op["op"])
        byte = f.read(1)