import json
from collections import defaultdict 

normal_mapping = json.load(open("mappings/normal_ops.json", "r"))
prefix_cp_mapping = json.load(open("mappings/prefix_cb.json", "r"))


def get_operation(mapping, opcode):
    row =  opcode[0] + "x"
    col =  "x" + opcode[1]

    col_i = mapping["columns"].index(col)
    translated_op = mapping[row][col_i]

    return translated_op


with open("parser_opcodes_functions.h", "w") as f:
    l = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"]

    m = defaultdict(list)

    for i in l:
        for j in l:
            op = get_operation(normal_mapping, i+j)
            m[op['op'].split(" ")[0]].append(i+j)


    f.write("#ifndef PARSER_OPCODES_FUNCTIONS\n")
    f.write("#define PARSER_OPCODES_FUNCTIONS\n\n")

#    f.write("#include \"../cpu/commands/all.h\"\n")
#    f.write("#include \"../cpu/opcode.h\"\n\n\n")
    f.write('#include "/home/huguntu/hugo/nostemu/src/cpu/commands/all.h"\n#include "/home/huguntu/hugo/nostemu/src/cpu/opcode.h"\n')
    f.write("#include <string>\n\n\n")

    for k, v in m.items():
        f.write(f"void parse{k.upper()}(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom)")
        f.write(" {}\n")

    f.write("""
bool compareOps(std::string* ops, int size, std::string& code) {
    for(int i = 0; i < size; i++) {
        std::string op = ops[i];
        if(op.compare(code)) {
            return true;
        }
    }
    return false;
}""")



    f.write("\n\nvoid processOpcode(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom)")
    f.write(" {\n")

    for k, v in m.items():
        f.write(f"\tstd::string {k}_opcodes[] = ")
        f.write("{ ")
        for i in range(len(v)):
            f.write('"' + v[i] + '"')
            if i != len(v)-1:
                f.write(",")
        f.write("};\n")
    
    f.write("\n\n\tstd::string opcode = {code.first_part, code.second_part};\n\n")

    for k, v in m.items():
        f.write(f"\tif (compareOps({k}_opcodes, {len(v)}, opcode)) ")
        f.write(" { ")
        f.write(f"parse{k.upper()}(code, index, buffer, rom); return;")
        f.write(" }\n")
        #f.write(" {\n")
        #f.write(f"\t\tparse{k.upper()}(code, index, buffer, rom);\n")
        #f.write("\t}\n\n")

    f.write(" }\n\n")
    f.write("#endif\n") 


