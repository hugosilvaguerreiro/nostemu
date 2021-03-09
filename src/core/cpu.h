
#ifndef CPU_
#define CPU_

#include <string>


enum REGISTER {
    A, B, C, D, E, F, H, L, // normal registers (8 bit)
    AF, BC, DE, HL,         // paired registers (16 bit)
	SP, PC                  // special registers (F is also a special register)
};

enum FLAGS {
	ZERO, N, HALF_CARRY, CARRY
};


class CPU {
	/* The GameBoy has instructions & registers similar to the Intel 8080, Intel 8085, & Zilog Z80 microprocessors. 
	* It has eight 8-bit registers A,B,C,D,E,F,H,L 
	* and two 16-bit registers SP & PC:
	*/
	uint8_t registers[8];
	uint8_t flags[8];
	uint16_t SP;
	uint16_t PC;

};



#endif