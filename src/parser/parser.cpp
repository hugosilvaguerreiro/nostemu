//#include <sys/stat.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

#include "parser.h"


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




void parsePrefixCB(int& currentIndex, std::vector<unsigned char>& buffer, Rom& rom) {
    currentIndex++; //advance index to get the new instruction;

    OpCode code = convertByteToOpCode(buffer.at(currentIndex));
}


void Parser::parseRawBinary(char* filename) {

    //Read binary file
    std::ifstream input( filename, std::ios::binary );
    // copies all data into buffer
    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(input), {});

    //Convert all bytes to hex strings;   
    bool found_cb = false;
    for(int i =0; i < buffer.size(); i++) {
        OpCode code = convertByteToOpCode(buffer.at(i));

        if(code.first_part == 'C' && code.second_part == 'B') {
            parsePrefixCB(i, buffer, this->rom);
        }
    }

    for(unsigned char rawOpCode : buffer) {
        
        
        //second type of instruction that is prefixed by the "CB" instruction
        if(code.first_part == 'C' && code.second_part == 'B') { 
            found_cb = true;
            continue; //the next instruction is the one we are interested
        } else {
            if(found_cb) {
                
                found_cb = false;
                code.is_cb = true;
                this->rawOpCodes.push_back(code);
                /*std::cout << "CB" << code.first_part 
                          << code.second_part << " | " 
                          << cb->instruction->first_part << cb->instruction->second_part << "\n";*/

            } else {
                this->rawOpCodes.push_back(code);
            }
        }
    }

    /*for(OpCode op : this->rawOpCodes) {
        print_operation(&op);
    }*/
}

/*
* Converts all opCodes to 
*/
void Parser::parseOpCodes() {
    /*for(OpCode op : this->rawOpCodes) {
        //rom.
    }*/
}

void Parser::parse(char* filename) {
    this->parseRawBinary(filename);
}


OpCode convertByteToOpCode(unsigned char initialByte) {
    unsigned char firstNibble=0U;  // a Nibble is 4 bits, half a byte, one hexadecimal character
    unsigned char secondNibble=0U;


    firstNibble=(initialByte>>4);  // isolate first 4 bits
    secondNibble=(initialByte&0x0F);  // isolate last 4 bits

    return OpCode(processNibble(firstNibble), processNibble(secondNibble));

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
