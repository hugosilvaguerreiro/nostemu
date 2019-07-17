#include <stdint.h>


class CPU {
	/* The GameBoy has instructions & registers similar to the Intel 8080, Intel 8085, & Zilog Z80 microprocessors. 
	* It has eight 8-bit registers A,B,C,D,E,F,H,L 
	* and two 16-bit registers SP & PC:
	*/
	uint8_t registers[8];
	uint16_t SP;
	uint16_t PC;

};

