#ifndef ALLFD
#define ALLFD

/*
* This file serves to forward declare all existing classes in order to be used by the Runners
*/

class Rom;

/* =================================
*  ============ ALU ================
*  =================================
*/
class ADC;
class ADD;
class AND;
class CP;
class DEC;
class INC;
class OR;
class SBC;
class SUB;
class XOR;


/* =================================
*  ============ BIT ================
*  =================================
*/

class BIT;
class RES;
class SET;


/* =================================
*  ========== CONTROL ==============
*  =================================
*/

class RET;
class RETI;
class RST;

/* =================================
*  ============ JUMP ===============
*  =================================
*/

class RET;
class RETI;
class RST;

/* =================================
*  ============ LOAD ===============
*  =================================
*/
class LDD;  
class LD;



/* =================================
*  ============ MISC ===============
*  =================================
*/

class CCF;
class CPL;
class DAA;
class DI;
class EI;
class HALT;
class NOP;
class SCF;
class STOP;
class SWAP;


/* =================================
*  =========== SHIFT ===============
*  =================================
*/

class RLA;
class RLCA;
class RLC;
class RL;
class RRA;
class RRCA;
class RRC;
class RR;
class SLA;
class SRA;
class SRL;

/* =================================
*  =========== STACK ===============
*  =================================
*/

class POP;
class PUSH;

#endif