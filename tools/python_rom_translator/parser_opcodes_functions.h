#ifndef PARSER_OPCODES_FUNCTIONS
#define PARSER_OPCODES_FUNCTIONS

#include "/home/huguntu/hugo/nostemu/src/cpu/commands/all.h"
#include "/home/huguntu/hugo/nostemu/src/cpu/opcode.h"
#include <string>


void parseNOP(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseLD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseINC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseDEC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRLCA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseADD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRRCA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseSTOP(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRLA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseJR(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRRA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseDAA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseCPL(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseSCF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseCCF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseHALT(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseADC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseSUB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseSBC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseAND(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseXOR(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseOR(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseCP(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRET(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parsePOP(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseJP(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseCALL(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parsePUSH(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRST(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parsePREFIX(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseRETI(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseLDH(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseDI(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
void parseEI(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}

bool compareOps(std::string* ops, int size, std::string& code) {
    for(int i = 0; i < size; i++) {
        std::string op = ops[i];
        if(op.compare(code)) {
            return true;
        }
    }
    return false;
}

void processOpcode(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {
	std::string NOP_opcodes[] = { "00","d3","db","dd","e3","e4","eb","ec","ed","f4","fc","fd"};
	std::string LD_opcodes[] = { "01","02","06","08","0a","0e","11","12","16","1a","1e","21","22","26","2a","2e","31","32","36","3a","3e","40","41","42","43","44","45","46","47","48","49","4a","4b","4c","4d","4e","4f","50","51","52","53","54","55","56","57","58","59","5a","5b","5c","5d","5e","5f","60","61","62","63","64","65","66","67","68","69","6a","6b","6c","6d","6e","6f","70","71","72","73","74","75","77","78","79","7a","7b","7c","7d","7e","7f","e2","ea","f2","f8","f9","fa"};
	std::string INC_opcodes[] = { "03","04","0c","13","14","1c","23","24","2c","33","34","3c"};
	std::string DEC_opcodes[] = { "05","0b","0d","15","1b","1d","25","2b","2d","35","3b","3d"};
	std::string RLCA_opcodes[] = { "07"};
	std::string ADD_opcodes[] = { "09","19","29","39","80","81","82","83","84","85","86","87","c6","e8"};
	std::string RRCA_opcodes[] = { "0f"};
	std::string STOP_opcodes[] = { "10"};
	std::string RLA_opcodes[] = { "17"};
	std::string JR_opcodes[] = { "18","20","28","30","38"};
	std::string RRA_opcodes[] = { "1f"};
	std::string DAA_opcodes[] = { "27"};
	std::string CPL_opcodes[] = { "2f"};
	std::string SCF_opcodes[] = { "37"};
	std::string CCF_opcodes[] = { "3f"};
	std::string HALT_opcodes[] = { "76"};
	std::string ADC_opcodes[] = { "88","89","8a","8b","8c","8d","8e","8f","ce"};
	std::string SUB_opcodes[] = { "90","91","92","93","94","95","96","97","d6"};
	std::string SBC_opcodes[] = { "98","99","9a","9b","9c","9d","9e","9f","de"};
	std::string AND_opcodes[] = { "a0","a1","a2","a3","a4","a5","a6","a7","e6"};
	std::string XOR_opcodes[] = { "a8","a9","aa","ab","ac","ad","ae","af","ee"};
	std::string OR_opcodes[] = { "b0","b1","b2","b3","b4","b5","b6","b7","f6"};
	std::string CP_opcodes[] = { "b8","b9","ba","bb","bc","bd","be","bf","fe"};
	std::string RET_opcodes[] = { "c0","c8","c9","d0","d8"};
	std::string POP_opcodes[] = { "c1","d1","e1","f1"};
	std::string JP_opcodes[] = { "c2","c3","ca","d2","da","e9"};
	std::string CALL_opcodes[] = { "c4","cc","cd","d4","dc"};
	std::string PUSH_opcodes[] = { "c5","d5","e5","f5"};
	std::string RST_opcodes[] = { "c7","cf","d7","df","e7","ef","f7","ff"};
	std::string PREFIX_opcodes[] = { "cb"};
	std::string RETI_opcodes[] = { "d9"};
	std::string LDH_opcodes[] = { "e0","f0"};
	std::string DI_opcodes[] = { "f3"};
	std::string EI_opcodes[] = { "fb"};


	std::string opcode = {code.first_part, code.second_part};

	if (compareOps(NOP_opcodes, 12, opcode))  { parseNOP(code, index, buffer, rom); return; }
	if (compareOps(LD_opcodes, 90, opcode))  { parseLD(code, index, buffer, rom); return; }
	if (compareOps(INC_opcodes, 12, opcode))  { parseINC(code, index, buffer, rom); return; }
	if (compareOps(DEC_opcodes, 12, opcode))  { parseDEC(code, index, buffer, rom); return; }
	if (compareOps(RLCA_opcodes, 1, opcode))  { parseRLCA(code, index, buffer, rom); return; }
	if (compareOps(ADD_opcodes, 14, opcode))  { parseADD(code, index, buffer, rom); return; }
	if (compareOps(RRCA_opcodes, 1, opcode))  { parseRRCA(code, index, buffer, rom); return; }
	if (compareOps(STOP_opcodes, 1, opcode))  { parseSTOP(code, index, buffer, rom); return; }
	if (compareOps(RLA_opcodes, 1, opcode))  { parseRLA(code, index, buffer, rom); return; }
	if (compareOps(JR_opcodes, 5, opcode))  { parseJR(code, index, buffer, rom); return; }
	if (compareOps(RRA_opcodes, 1, opcode))  { parseRRA(code, index, buffer, rom); return; }
	if (compareOps(DAA_opcodes, 1, opcode))  { parseDAA(code, index, buffer, rom); return; }
	if (compareOps(CPL_opcodes, 1, opcode))  { parseCPL(code, index, buffer, rom); return; }
	if (compareOps(SCF_opcodes, 1, opcode))  { parseSCF(code, index, buffer, rom); return; }
	if (compareOps(CCF_opcodes, 1, opcode))  { parseCCF(code, index, buffer, rom); return; }
	if (compareOps(HALT_opcodes, 1, opcode))  { parseHALT(code, index, buffer, rom); return; }
	if (compareOps(ADC_opcodes, 9, opcode))  { parseADC(code, index, buffer, rom); return; }
	if (compareOps(SUB_opcodes, 9, opcode))  { parseSUB(code, index, buffer, rom); return; }
	if (compareOps(SBC_opcodes, 9, opcode))  { parseSBC(code, index, buffer, rom); return; }
	if (compareOps(AND_opcodes, 9, opcode))  { parseAND(code, index, buffer, rom); return; }
	if (compareOps(XOR_opcodes, 9, opcode))  { parseXOR(code, index, buffer, rom); return; }
	if (compareOps(OR_opcodes, 9, opcode))  { parseOR(code, index, buffer, rom); return; }
	if (compareOps(CP_opcodes, 9, opcode))  { parseCP(code, index, buffer, rom); return; }
	if (compareOps(RET_opcodes, 5, opcode))  { parseRET(code, index, buffer, rom); return; }
	if (compareOps(POP_opcodes, 4, opcode))  { parsePOP(code, index, buffer, rom); return; }
	if (compareOps(JP_opcodes, 6, opcode))  { parseJP(code, index, buffer, rom); return; }
	if (compareOps(CALL_opcodes, 5, opcode))  { parseCALL(code, index, buffer, rom); return; }
	if (compareOps(PUSH_opcodes, 4, opcode))  { parsePUSH(code, index, buffer, rom); return; }
	if (compareOps(RST_opcodes, 8, opcode))  { parseRST(code, index, buffer, rom); return; }
	if (compareOps(PREFIX_opcodes, 1, opcode))  { parsePREFIX(code, index, buffer, rom); return; }
	if (compareOps(RETI_opcodes, 1, opcode))  { parseRETI(code, index, buffer, rom); return; }
	if (compareOps(LDH_opcodes, 2, opcode))  { parseLDH(code, index, buffer, rom); return; }
	if (compareOps(DI_opcodes, 1, opcode))  { parseDI(code, index, buffer, rom); return; }
	if (compareOps(EI_opcodes, 1, opcode))  { parseEI(code, index, buffer, rom); return; }
 }

#endif
