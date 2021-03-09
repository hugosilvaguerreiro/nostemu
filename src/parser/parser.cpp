//#include <sys/stat.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

#include "parser.h"
#include "parser_opcodes_functions.h"
#include "parser_prefix_cb_opcodes_functions.h"


/*int getFileSizeInBytes(char* filename) {
    struct stat results;
    std::cout << filename << "\n";

    if (stat(filename, &results) == 0)
        return results.st_size;
    else
        return -1;
}*/


/*void print_operation(OpCode* c) {
    
    if(c->is_cb) {
        std::cout << " PREFIX ";
    }
    std::cout << c->first_part << c->second_part;   
}*/


Parser::Parser() : rawOpCodes(), rom() {}




void Parser::parseRawBinary(char* filename) {

    //Read binary file
    std::ifstream input( filename, std::ios::binary );
    // copies all data into buffer
    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(input), {});

    //Convert all bytes to hex strings;   
    for(int i =0; i < (int)buffer.size(); i++) {
        OpCode code = convertByteToOpCode(buffer.at(i)); // This isn't necessary, it just makes the parser run slower, but its convenient 

        //std::cout << "( " << code.first_part << code.second_part << " , " << (int)buffer.at(i) << ") ";
        if(code.first_part == 'C' && code.second_part == 'B') {

            processPrefixCBcode(code, i, buffer, this->rom);
        } else {
            processOpcode(code, i, buffer, this->rom);
        }
    }
}


void Parser::parse(char* filename) {
    this->parseRawBinary(filename);
}


OpCode convertByteToOpCode(unsigned char initialByte) {
    unsigned char firstNibble=0U;  // a Nibble is 4 bits, half a byte, one hexadecimal character
    unsigned char secondNibble=0U;


    firstNibble=(initialByte>>4);  // isolate first 4 bits
    secondNibble=(initialByte&0x0F);  // isolate last 4 bits

    return OpCode(processNibble(firstNibble), processNibble(secondNibble), initialByte);

}


/*
* Converts a Nibble into its HEX char correspondent
*/
char processNibble(unsigned char nibble) {
        if(nibble<10U) {
        return (char)('0'+nibble);
    } else {
     nibble-=10U;
     return (char)('A'+nibble);
    }
}
