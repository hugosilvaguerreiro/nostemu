/*
* This file serves to help parse all the opcodes.
* It is implemented in the following way:
*         - 1: We define a function for each possible upcode. 
*         - 2: We define an array of function pointers where the position of the function in the array 
*			   corresponds to the opcode value. This way, we can efficiently identify the correct
*			   function to parse each opcode			
*/


#ifndef PARSER_OPCODES_FUNCTIONS
#define PARSER_OPCODES_FUNCTIONS

#include "../core/commands/all.h"
#include "../core/opcode.h"

#include <iostream>
#include <string>

static NOP n; //this instruction does nothing and is always the same, therefore we can always use the same reference

inline void parseNOP_00(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {
	rom.addInstruction(n);
}

inline void parseLD_BC_D16_01(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_BC_A_02(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_BC_03(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_B_04(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_B_05(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_D8_06(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLCA_07(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_A16_SP_08(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_HL_BC_09(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_BC_0A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_BC_0B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_C_0C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_C_0D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_D8_0E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRCA_0F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSTOP_0_10(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_DE_D16_11(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_DE_A_12(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_DE_13(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_D_14(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_D_15(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_D8_16(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLA_17(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJR_R8_18(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_HL_DE_19(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_DE_1A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_DE_1B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_E_1C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_E_1D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_D8_1E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRA_1F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJR_NZ_R8_20(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_HL_D16_21(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_PLUS__A_22(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_HL_23(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_H_24(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_H_25(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_D8_26(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDAA_27(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJR_Z_R8_28(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_HL_HL_29(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_HL_PLUS__2A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_HL_2B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_L_2C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_L_2D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_D8_2E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCPL_2F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJR_NC_R8_30(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SP_D16_31(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_MINUS__A_32(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_SP_33(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_SPECIAL_MNEMONIC_HL_34(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_SPECIAL_MNEMONIC_HL_35(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_D8_36(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSCF_37(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJR_C_R8_38(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_HL_SP_39(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_HL_MINUS__3A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_SP_3B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseINC_A_3C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDEC_A_3D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_D8_3E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCCF_3F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_B_40(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_C_41(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_D_42(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_E_43(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_H_44(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_L_45(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_SPECIAL_MNEMONIC_HL_46(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_B_A_47(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_B_48(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_C_49(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_D_4A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_E_4B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_H_4C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_L_4D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_SPECIAL_MNEMONIC_HL_4E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_C_A_4F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_B_50(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_C_51(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_D_52(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_E_53(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_H_54(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_L_55(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_SPECIAL_MNEMONIC_HL_56(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_D_A_57(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_B_58(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_C_59(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_D_5A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_E_5B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_H_5C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_L_5D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_SPECIAL_MNEMONIC_HL_5E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_E_A_5F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_B_60(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_C_61(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_D_62(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_E_63(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_H_64(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_L_65(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_SPECIAL_MNEMONIC_HL_66(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_H_A_67(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_B_68(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_C_69(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_D_6A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_E_6B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_H_6C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_L_6D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_SPECIAL_MNEMONIC_HL_6E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_L_A_6F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_B_70(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_C_71(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_D_72(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_E_73(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_H_74(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_L_75(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseHALT_76(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_HL_A_77(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_B_78(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_C_79(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_D_7A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_E_7B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_H_7C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_L_7D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_HL_7E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_A_7F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_B_80(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_C_81(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_D_82(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_E_83(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_H_84(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_L_85(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_SPECIAL_MNEMONIC_HL_86(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_A_87(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_B_88(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_C_89(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_D_8A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_E_8B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_H_8C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_L_8D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_SPECIAL_MNEMONIC_HL_8E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_A_8F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_B_90(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_C_91(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_D_92(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_E_93(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_H_94(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_L_95(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_SPECIAL_MNEMONIC_HL_96(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_A_97(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_B_98(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_C_99(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_D_9A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_E_9B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_H_9C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_L_9D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_SPECIAL_MNEMONIC_HL_9E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_A_9F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_B_A0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_C_A1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_D_A2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_E_A3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_H_A4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_L_A5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_SPECIAL_MNEMONIC_HL_A6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_A_A7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_B_A8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_C_A9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_D_AA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_E_AB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_H_AC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_L_AD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_SPECIAL_MNEMONIC_HL_AE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_A_AF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_B_B0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_C_B1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_D_B2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_E_B3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_H_B4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_L_B5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_SPECIAL_MNEMONIC_HL_B6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_A_B7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_B_B8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_C_B9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_D_BA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_E_BB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_H_BC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_L_BD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_SPECIAL_MNEMONIC_HL_BE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_A_BF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRET_NZ_C0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePOP_BC_C1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_NZ_A16_C2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_A16_C3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCALL_NZ_A16_C4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePUSH_BC_C5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_A_D8_C6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_00H_C7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRET_Z_C8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRET_C9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_Z_A16_CA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePREFIX_CB_CB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCALL_Z_A16_CC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCALL_A16_CD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADC_A_D8_CE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_08H_CF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRET_NC_D0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePOP_DE_D1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_NC_A16_D2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_D3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCALL_NC_A16_D4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePUSH_DE_D5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSUB_D8_D6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_10H_D7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRET_C_D8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRETI_D9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_C_A16_DA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_DB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCALL_C_A16_DC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_DD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSBC_A_D8_DE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_18H_DF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLDH_SPECIAL_MNEMONIC_A8_A_E0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePOP_HL_E1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_C_A_E2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_E3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_E4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePUSH_HL_E5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseAND_D8_E6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_20H_E7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseADD_SP_R8_E8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseJP_SPECIAL_MNEMONIC_HL_E9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SPECIAL_MNEMONIC_A16_A_EA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_EB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_EC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_ED(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseXOR_D8_EE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_28H_EF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLDH_A_SPECIAL_MNEMONIC_A8_F0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePOP_AF_F1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_C_F2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseDI_F3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_F4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parsePUSH_AF_F5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseOR_D8_F6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_30H_F7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_HL_SP_PLUS_R8_F8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_SP_HL_F9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseLD_A_SPECIAL_MNEMONIC_A16_FA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseEI_FB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_FC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseNOP_FD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseCP_D8_FE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRST_38H_FF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}


static void (*MAPPING[])(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) = {
					parseNOP_00, parseLD_BC_D16_01, parseLD_SPECIAL_MNEMONIC_BC_A_02, parseINC_BC_03, parseINC_B_04, parseDEC_B_05, parseLD_B_D8_06, parseRLCA_07, 
					parseLD_SPECIAL_MNEMONIC_A16_SP_08, parseADD_HL_BC_09, parseLD_A_SPECIAL_MNEMONIC_BC_0A, parseDEC_BC_0B, parseINC_C_0C, parseDEC_C_0D, parseLD_C_D8_0E, parseRRCA_0F, 
					parseSTOP_0_10, parseLD_DE_D16_11, parseLD_SPECIAL_MNEMONIC_DE_A_12, parseINC_DE_13, parseINC_D_14, parseDEC_D_15, parseLD_D_D8_16, parseRLA_17, 
					parseJR_R8_18, parseADD_HL_DE_19, parseLD_A_SPECIAL_MNEMONIC_DE_1A, parseDEC_DE_1B, parseINC_E_1C, parseDEC_E_1D, parseLD_E_D8_1E, parseRRA_1F, 
					parseJR_NZ_R8_20, parseLD_HL_D16_21, parseLD_SPECIAL_MNEMONIC_HL_PLUS__A_22, parseINC_HL_23, parseINC_H_24, parseDEC_H_25, parseLD_H_D8_26, parseDAA_27, 
					parseJR_Z_R8_28, parseADD_HL_HL_29, parseLD_A_SPECIAL_MNEMONIC_HL_PLUS__2A, parseDEC_HL_2B, parseINC_L_2C, parseDEC_L_2D, parseLD_L_D8_2E, parseCPL_2F, 
					parseJR_NC_R8_30, parseLD_SP_D16_31, parseLD_SPECIAL_MNEMONIC_HL_MINUS__A_32, parseINC_SP_33, parseINC_SPECIAL_MNEMONIC_HL_34, parseDEC_SPECIAL_MNEMONIC_HL_35, parseLD_SPECIAL_MNEMONIC_HL_D8_36, parseSCF_37, 
					parseJR_C_R8_38, parseADD_HL_SP_39, parseLD_A_SPECIAL_MNEMONIC_HL_MINUS__3A, parseDEC_SP_3B, parseINC_A_3C, parseDEC_A_3D, parseLD_A_D8_3E, parseCCF_3F, 
					parseLD_B_B_40, parseLD_B_C_41, parseLD_B_D_42, parseLD_B_E_43, parseLD_B_H_44, parseLD_B_L_45, parseLD_B_SPECIAL_MNEMONIC_HL_46, parseLD_B_A_47, 
					parseLD_C_B_48, parseLD_C_C_49, parseLD_C_D_4A, parseLD_C_E_4B, parseLD_C_H_4C, parseLD_C_L_4D, parseLD_C_SPECIAL_MNEMONIC_HL_4E, parseLD_C_A_4F, 
					parseLD_D_B_50, parseLD_D_C_51, parseLD_D_D_52, parseLD_D_E_53, parseLD_D_H_54, parseLD_D_L_55, parseLD_D_SPECIAL_MNEMONIC_HL_56, parseLD_D_A_57, 
					parseLD_E_B_58, parseLD_E_C_59, parseLD_E_D_5A, parseLD_E_E_5B, parseLD_E_H_5C, parseLD_E_L_5D, parseLD_E_SPECIAL_MNEMONIC_HL_5E, parseLD_E_A_5F, 
					parseLD_H_B_60, parseLD_H_C_61, parseLD_H_D_62, parseLD_H_E_63, parseLD_H_H_64, parseLD_H_L_65, parseLD_H_SPECIAL_MNEMONIC_HL_66, parseLD_H_A_67, 
					parseLD_L_B_68, parseLD_L_C_69, parseLD_L_D_6A, parseLD_L_E_6B, parseLD_L_H_6C, parseLD_L_L_6D, parseLD_L_SPECIAL_MNEMONIC_HL_6E, parseLD_L_A_6F, 
					parseLD_SPECIAL_MNEMONIC_HL_B_70, parseLD_SPECIAL_MNEMONIC_HL_C_71, parseLD_SPECIAL_MNEMONIC_HL_D_72, parseLD_SPECIAL_MNEMONIC_HL_E_73, parseLD_SPECIAL_MNEMONIC_HL_H_74, parseLD_SPECIAL_MNEMONIC_HL_L_75, parseHALT_76, parseLD_SPECIAL_MNEMONIC_HL_A_77, 
					parseLD_A_B_78, parseLD_A_C_79, parseLD_A_D_7A, parseLD_A_E_7B, parseLD_A_H_7C, parseLD_A_L_7D, parseLD_A_SPECIAL_MNEMONIC_HL_7E, parseLD_A_A_7F, 
					parseADD_A_B_80, parseADD_A_C_81, parseADD_A_D_82, parseADD_A_E_83, parseADD_A_H_84, parseADD_A_L_85, parseADD_A_SPECIAL_MNEMONIC_HL_86, parseADD_A_A_87, 
					parseADC_A_B_88, parseADC_A_C_89, parseADC_A_D_8A, parseADC_A_E_8B, parseADC_A_H_8C, parseADC_A_L_8D, parseADC_A_SPECIAL_MNEMONIC_HL_8E, parseADC_A_A_8F, 
					parseSUB_B_90, parseSUB_C_91, parseSUB_D_92, parseSUB_E_93, parseSUB_H_94, parseSUB_L_95, parseSUB_SPECIAL_MNEMONIC_HL_96, parseSUB_A_97, 
					parseSBC_A_B_98, parseSBC_A_C_99, parseSBC_A_D_9A, parseSBC_A_E_9B, parseSBC_A_H_9C, parseSBC_A_L_9D, parseSBC_A_SPECIAL_MNEMONIC_HL_9E, parseSBC_A_A_9F, 
					parseAND_B_A0, parseAND_C_A1, parseAND_D_A2, parseAND_E_A3, parseAND_H_A4, parseAND_L_A5, parseAND_SPECIAL_MNEMONIC_HL_A6, parseAND_A_A7, 
					parseXOR_B_A8, parseXOR_C_A9, parseXOR_D_AA, parseXOR_E_AB, parseXOR_H_AC, parseXOR_L_AD, parseXOR_SPECIAL_MNEMONIC_HL_AE, parseXOR_A_AF, 
					parseOR_B_B0, parseOR_C_B1, parseOR_D_B2, parseOR_E_B3, parseOR_H_B4, parseOR_L_B5, parseOR_SPECIAL_MNEMONIC_HL_B6, parseOR_A_B7, 
					parseCP_B_B8, parseCP_C_B9, parseCP_D_BA, parseCP_E_BB, parseCP_H_BC, parseCP_L_BD, parseCP_SPECIAL_MNEMONIC_HL_BE, parseCP_A_BF, 
					parseRET_NZ_C0, parsePOP_BC_C1, parseJP_NZ_A16_C2, parseJP_A16_C3, parseCALL_NZ_A16_C4, parsePUSH_BC_C5, parseADD_A_D8_C6, parseRST_00H_C7, 
					parseRET_Z_C8, parseRET_C9, parseJP_Z_A16_CA, parsePREFIX_CB_CB, parseCALL_Z_A16_CC, parseCALL_A16_CD, parseADC_A_D8_CE, parseRST_08H_CF, 
					parseRET_NC_D0, parsePOP_DE_D1, parseJP_NC_A16_D2, parseNOP_D3, parseCALL_NC_A16_D4, parsePUSH_DE_D5, parseSUB_D8_D6, parseRST_10H_D7, 
					parseRET_C_D8, parseRETI_D9, parseJP_C_A16_DA, parseNOP_DB, parseCALL_C_A16_DC, parseNOP_DD, parseSBC_A_D8_DE, parseRST_18H_DF, 
					parseLDH_SPECIAL_MNEMONIC_A8_A_E0, parsePOP_HL_E1, parseLD_SPECIAL_MNEMONIC_C_A_E2, parseNOP_E3, parseNOP_E4, parsePUSH_HL_E5, parseAND_D8_E6, parseRST_20H_E7, 
					parseADD_SP_R8_E8, parseJP_SPECIAL_MNEMONIC_HL_E9, parseLD_SPECIAL_MNEMONIC_A16_A_EA, parseNOP_EB, parseNOP_EC, parseNOP_ED, parseXOR_D8_EE, parseRST_28H_EF, 
					parseLDH_A_SPECIAL_MNEMONIC_A8_F0, parsePOP_AF_F1, parseLD_A_SPECIAL_MNEMONIC_C_F2, parseDI_F3, parseNOP_F4, parsePUSH_AF_F5, parseOR_D8_F6, parseRST_30H_F7, 
					parseLD_HL_SP_PLUS_R8_F8, parseLD_SP_HL_F9, parseLD_A_SPECIAL_MNEMONIC_A16_FA, parseEI_FB, parseNOP_FC, parseNOP_FD, parseCP_D8_FE, parseRST_38H_FF, 
				};



inline void processOpcode(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {

	std::string opcode = {code.first_part, code.second_part};

	MAPPING[(int)code.originalByte](code, index, buffer, rom);
 }

#endif
