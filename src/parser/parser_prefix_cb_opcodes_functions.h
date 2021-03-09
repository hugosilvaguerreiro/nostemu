/*
* This file serves to help parse all the opcodes.
* It is implemented in the following way:
*         - 1: We define a function for each possible upcode. 
*         - 2: We define an array of function pointers where the position of the function in the array 
*			   corresponds to the opcode value. This way, we can efficiently identify the correct
*			   function to parse each opcode			
*/

#ifndef PARSER_PREFIX_OPCODES_FUNCTIONS
#define PARSER_PREFIX_OPCODES_FUNCTIONS

#include "../core/commands/all.h"
#include "../core/opcode.h"
#include <string>
#include <vector>


inline void parseRLC_B_CB_00(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_C_CB_01(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_D_CB_02(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_E_CB_03(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_H_CB_04(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_L_CB_05(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_SPECIAL_MNEMONIC_HL_CB_06(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRLC_A_CB_07(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_B_CB_08(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_C_CB_09(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_D_CB_0A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_E_CB_0B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_H_CB_0C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_L_CB_0D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_SPECIAL_MNEMONIC_HL_CB_0E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRRC_A_CB_0F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_B_CB_10(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_C_CB_11(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_D_CB_12(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_E_CB_13(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_H_CB_14(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_L_CB_15(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_SPECIAL_MNEMONIC_HL_CB_16(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRL_A_CB_17(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_B_CB_18(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_C_CB_19(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_D_CB_1A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_E_CB_1B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_H_CB_1C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_L_CB_1D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_SPECIAL_MNEMONIC_HL_CB_1E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRR_A_CB_1F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_B_CB_20(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_C_CB_21(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_D_CB_22(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_E_CB_23(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_H_CB_24(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_L_CB_25(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_SPECIAL_MNEMONIC_HL_CB_26(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSLA_A_CB_27(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_B_CB_28(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_C_CB_29(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_D_CB_2A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_E_CB_2B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_H_CB_2C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_L_CB_2D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_SPECIAL_MNEMONIC_HL_CB_2E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRA_A_CB_2F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_B_CB_30(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_C_CB_31(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_D_CB_32(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_E_CB_33(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_H_CB_34(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_L_CB_35(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_SPECIAL_MNEMONIC_HL_CB_36(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSWAP_A_CB_37(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_B_CB_38(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_C_CB_39(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_D_CB_3A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_E_CB_3B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_H_CB_3C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_L_CB_3D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_SPECIAL_MNEMONIC_HL_CB_3E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSRL_A_CB_3F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_B_CB_40(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_C_CB_41(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_D_CB_42(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_E_CB_43(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_H_CB_44(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_L_CB_45(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_SPECIAL_MNEMONIC_HL_CB_46(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_0_A_CB_47(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_B_CB_48(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_C_CB_49(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_D_CB_4A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_E_CB_4B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_H_CB_4C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_L_CB_4D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_SPECIAL_MNEMONIC_HL_CB_4E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_1_A_CB_4F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_B_CB_50(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_C_CB_51(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_D_CB_52(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_E_CB_53(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_H_CB_54(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_L_CB_55(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_SPECIAL_MNEMONIC_HL_CB_56(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_2_A_CB_57(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_B_CB_58(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_C_CB_59(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_D_CB_5A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_E_CB_5B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_H_CB_5C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_L_CB_5D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_SPECIAL_MNEMONIC_HL_CB_5E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_3_A_CB_5F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_B_CB_60(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_C_CB_61(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_D_CB_62(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_E_CB_63(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_H_CB_64(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_L_CB_65(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_SPECIAL_MNEMONIC_HL_CB_66(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_4_A_CB_67(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_B_CB_68(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_C_CB_69(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_D_CB_6A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_E_CB_6B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_H_CB_6C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_L_CB_6D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_SPECIAL_MNEMONIC_HL_CB_6E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_5_A_CB_6F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_B_CB_70(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_C_CB_71(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_D_CB_72(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_E_CB_73(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_H_CB_74(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_L_CB_75(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_SPECIAL_MNEMONIC_HL_CB_76(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_6_A_CB_77(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_B_CB_78(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_C_CB_79(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_D_CB_7A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_E_CB_7B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_H_CB_7C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_L_CB_7D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_SPECIAL_MNEMONIC_HL_CB_7E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseBIT_7_A_CB_7F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_B_CB_80(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_C_CB_81(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_D_CB_82(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_E_CB_83(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_H_CB_84(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_L_CB_85(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_SPECIAL_MNEMONIC_HL_CB_86(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_0_A_CB_87(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_B_CB_88(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_C_CB_89(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_D_CB_8A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_E_CB_8B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_H_CB_8C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_L_CB_8D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_SPECIAL_MNEMONIC_HL_CB_8E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_1_A_CB_8F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_B_CB_90(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_C_CB_91(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_D_CB_92(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_E_CB_93(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_H_CB_94(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_L_CB_95(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_SPECIAL_MNEMONIC_HL_CB_96(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_2_A_CB_97(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_B_CB_98(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_C_CB_99(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_D_CB_9A(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_E_CB_9B(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_H_CB_9C(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_L_CB_9D(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_SPECIAL_MNEMONIC_HL_CB_9E(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_3_A_CB_9F(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_B_CB_A0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_C_CB_A1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_D_CB_A2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_E_CB_A3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_H_CB_A4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_L_CB_A5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_SPECIAL_MNEMONIC_HL_CB_A6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_4_A_CB_A7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_B_CB_A8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_C_CB_A9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_D_CB_AA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_E_CB_AB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_H_CB_AC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_L_CB_AD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_SPECIAL_MNEMONIC_HL_CB_AE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_5_A_CB_AF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_B_CB_B0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_C_CB_B1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_D_CB_B2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_E_CB_B3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_H_CB_B4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_L_CB_B5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_SPECIAL_MNEMONIC_HL_CB_B6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_6_A_CB_B7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_B_CB_B8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_C_CB_B9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_D_CB_BA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_E_CB_BB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_H_CB_BC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_L_CB_BD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_SPECIAL_MNEMONIC_HL_CB_BE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseRES_7_A_CB_BF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_B_CB_C0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_C_CB_C1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_D_CB_C2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_E_CB_C3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_H_CB_C4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_L_CB_C5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_SPECIAL_MNEMONIC_HL_CB_C6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_0_A_CB_C7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_B_CB_C8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_C_CB_C9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_D_CB_CA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_E_CB_CB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_H_CB_CC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_L_CB_CD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_SPECIAL_MNEMONIC_HL_CB_CE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_1_A_CB_CF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_B_CB_D0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_C_CB_D1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_D_CB_D2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_E_CB_D3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_H_CB_D4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_L_CB_D5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_SPECIAL_MNEMONIC_HL_CB_D6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_2_A_CB_D7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_B_CB_D8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_C_CB_D9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_D_CB_DA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_E_CB_DB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_H_CB_DC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_L_CB_DD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_SPECIAL_MNEMONIC_HL_CB_DE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_3_A_CB_DF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_B_CB_E0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_C_CB_E1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_D_CB_E2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_E_CB_E3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_H_CB_E4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_L_CB_E5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_SPECIAL_MNEMONIC_HL_CB_E6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_4_A_CB_E7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_B_CB_E8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_C_CB_E9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_D_CB_EA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_E_CB_EB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_H_CB_EC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_L_CB_ED(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_SPECIAL_MNEMONIC_HL_CB_EE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_5_A_CB_EF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_B_CB_F0(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_C_CB_F1(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_D_CB_F2(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_E_CB_F3(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_H_CB_F4(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_L_CB_F5(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_SPECIAL_MNEMONIC_HL_CB_F6(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_6_A_CB_F7(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_B_CB_F8(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_C_CB_F9(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_D_CB_FA(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_E_CB_FB(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_H_CB_FC(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_L_CB_FD(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_SPECIAL_MNEMONIC_HL_CB_FE(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}
inline void parseSET_7_A_CB_FF(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {}


static void (*CB_MAPPING[])(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) = {
					parseRLC_B_CB_00, parseRLC_C_CB_01, parseRLC_D_CB_02, parseRLC_E_CB_03, parseRLC_H_CB_04, parseRLC_L_CB_05, parseRLC_SPECIAL_MNEMONIC_HL_CB_06, parseRLC_A_CB_07, 
					parseRRC_B_CB_08, parseRRC_C_CB_09, parseRRC_D_CB_0A, parseRRC_E_CB_0B, parseRRC_H_CB_0C, parseRRC_L_CB_0D, parseRRC_SPECIAL_MNEMONIC_HL_CB_0E, parseRRC_A_CB_0F, 
					parseRL_B_CB_10, parseRL_C_CB_11, parseRL_D_CB_12, parseRL_E_CB_13, parseRL_H_CB_14, parseRL_L_CB_15, parseRL_SPECIAL_MNEMONIC_HL_CB_16, parseRL_A_CB_17, 
					parseRR_B_CB_18, parseRR_C_CB_19, parseRR_D_CB_1A, parseRR_E_CB_1B, parseRR_H_CB_1C, parseRR_L_CB_1D, parseRR_SPECIAL_MNEMONIC_HL_CB_1E, parseRR_A_CB_1F, 
					parseSLA_B_CB_20, parseSLA_C_CB_21, parseSLA_D_CB_22, parseSLA_E_CB_23, parseSLA_H_CB_24, parseSLA_L_CB_25, parseSLA_SPECIAL_MNEMONIC_HL_CB_26, parseSLA_A_CB_27, 
					parseSRA_B_CB_28, parseSRA_C_CB_29, parseSRA_D_CB_2A, parseSRA_E_CB_2B, parseSRA_H_CB_2C, parseSRA_L_CB_2D, parseSRA_SPECIAL_MNEMONIC_HL_CB_2E, parseSRA_A_CB_2F, 
					parseSWAP_B_CB_30, parseSWAP_C_CB_31, parseSWAP_D_CB_32, parseSWAP_E_CB_33, parseSWAP_H_CB_34, parseSWAP_L_CB_35, parseSWAP_SPECIAL_MNEMONIC_HL_CB_36, parseSWAP_A_CB_37, 
					parseSRL_B_CB_38, parseSRL_C_CB_39, parseSRL_D_CB_3A, parseSRL_E_CB_3B, parseSRL_H_CB_3C, parseSRL_L_CB_3D, parseSRL_SPECIAL_MNEMONIC_HL_CB_3E, parseSRL_A_CB_3F, 
					parseBIT_0_B_CB_40, parseBIT_0_C_CB_41, parseBIT_0_D_CB_42, parseBIT_0_E_CB_43, parseBIT_0_H_CB_44, parseBIT_0_L_CB_45, parseBIT_0_SPECIAL_MNEMONIC_HL_CB_46, parseBIT_0_A_CB_47, 
					parseBIT_1_B_CB_48, parseBIT_1_C_CB_49, parseBIT_1_D_CB_4A, parseBIT_1_E_CB_4B, parseBIT_1_H_CB_4C, parseBIT_1_L_CB_4D, parseBIT_1_SPECIAL_MNEMONIC_HL_CB_4E, parseBIT_1_A_CB_4F, 
					parseBIT_2_B_CB_50, parseBIT_2_C_CB_51, parseBIT_2_D_CB_52, parseBIT_2_E_CB_53, parseBIT_2_H_CB_54, parseBIT_2_L_CB_55, parseBIT_2_SPECIAL_MNEMONIC_HL_CB_56, parseBIT_2_A_CB_57, 
					parseBIT_3_B_CB_58, parseBIT_3_C_CB_59, parseBIT_3_D_CB_5A, parseBIT_3_E_CB_5B, parseBIT_3_H_CB_5C, parseBIT_3_L_CB_5D, parseBIT_3_SPECIAL_MNEMONIC_HL_CB_5E, parseBIT_3_A_CB_5F, 
					parseBIT_4_B_CB_60, parseBIT_4_C_CB_61, parseBIT_4_D_CB_62, parseBIT_4_E_CB_63, parseBIT_4_H_CB_64, parseBIT_4_L_CB_65, parseBIT_4_SPECIAL_MNEMONIC_HL_CB_66, parseBIT_4_A_CB_67, 
					parseBIT_5_B_CB_68, parseBIT_5_C_CB_69, parseBIT_5_D_CB_6A, parseBIT_5_E_CB_6B, parseBIT_5_H_CB_6C, parseBIT_5_L_CB_6D, parseBIT_5_SPECIAL_MNEMONIC_HL_CB_6E, parseBIT_5_A_CB_6F, 
					parseBIT_6_B_CB_70, parseBIT_6_C_CB_71, parseBIT_6_D_CB_72, parseBIT_6_E_CB_73, parseBIT_6_H_CB_74, parseBIT_6_L_CB_75, parseBIT_6_SPECIAL_MNEMONIC_HL_CB_76, parseBIT_6_A_CB_77, 
					parseBIT_7_B_CB_78, parseBIT_7_C_CB_79, parseBIT_7_D_CB_7A, parseBIT_7_E_CB_7B, parseBIT_7_H_CB_7C, parseBIT_7_L_CB_7D, parseBIT_7_SPECIAL_MNEMONIC_HL_CB_7E, parseBIT_7_A_CB_7F, 
					parseRES_0_B_CB_80, parseRES_0_C_CB_81, parseRES_0_D_CB_82, parseRES_0_E_CB_83, parseRES_0_H_CB_84, parseRES_0_L_CB_85, parseRES_0_SPECIAL_MNEMONIC_HL_CB_86, parseRES_0_A_CB_87, 
					parseRES_1_B_CB_88, parseRES_1_C_CB_89, parseRES_1_D_CB_8A, parseRES_1_E_CB_8B, parseRES_1_H_CB_8C, parseRES_1_L_CB_8D, parseRES_1_SPECIAL_MNEMONIC_HL_CB_8E, parseRES_1_A_CB_8F, 
					parseRES_2_B_CB_90, parseRES_2_C_CB_91, parseRES_2_D_CB_92, parseRES_2_E_CB_93, parseRES_2_H_CB_94, parseRES_2_L_CB_95, parseRES_2_SPECIAL_MNEMONIC_HL_CB_96, parseRES_2_A_CB_97, 
					parseRES_3_B_CB_98, parseRES_3_C_CB_99, parseRES_3_D_CB_9A, parseRES_3_E_CB_9B, parseRES_3_H_CB_9C, parseRES_3_L_CB_9D, parseRES_3_SPECIAL_MNEMONIC_HL_CB_9E, parseRES_3_A_CB_9F, 
					parseRES_4_B_CB_A0, parseRES_4_C_CB_A1, parseRES_4_D_CB_A2, parseRES_4_E_CB_A3, parseRES_4_H_CB_A4, parseRES_4_L_CB_A5, parseRES_4_SPECIAL_MNEMONIC_HL_CB_A6, parseRES_4_A_CB_A7, 
					parseRES_5_B_CB_A8, parseRES_5_C_CB_A9, parseRES_5_D_CB_AA, parseRES_5_E_CB_AB, parseRES_5_H_CB_AC, parseRES_5_L_CB_AD, parseRES_5_SPECIAL_MNEMONIC_HL_CB_AE, parseRES_5_A_CB_AF, 
					parseRES_6_B_CB_B0, parseRES_6_C_CB_B1, parseRES_6_D_CB_B2, parseRES_6_E_CB_B3, parseRES_6_H_CB_B4, parseRES_6_L_CB_B5, parseRES_6_SPECIAL_MNEMONIC_HL_CB_B6, parseRES_6_A_CB_B7, 
					parseRES_7_B_CB_B8, parseRES_7_C_CB_B9, parseRES_7_D_CB_BA, parseRES_7_E_CB_BB, parseRES_7_H_CB_BC, parseRES_7_L_CB_BD, parseRES_7_SPECIAL_MNEMONIC_HL_CB_BE, parseRES_7_A_CB_BF, 
					parseSET_0_B_CB_C0, parseSET_0_C_CB_C1, parseSET_0_D_CB_C2, parseSET_0_E_CB_C3, parseSET_0_H_CB_C4, parseSET_0_L_CB_C5, parseSET_0_SPECIAL_MNEMONIC_HL_CB_C6, parseSET_0_A_CB_C7, 
					parseSET_1_B_CB_C8, parseSET_1_C_CB_C9, parseSET_1_D_CB_CA, parseSET_1_E_CB_CB, parseSET_1_H_CB_CC, parseSET_1_L_CB_CD, parseSET_1_SPECIAL_MNEMONIC_HL_CB_CE, parseSET_1_A_CB_CF, 
					parseSET_2_B_CB_D0, parseSET_2_C_CB_D1, parseSET_2_D_CB_D2, parseSET_2_E_CB_D3, parseSET_2_H_CB_D4, parseSET_2_L_CB_D5, parseSET_2_SPECIAL_MNEMONIC_HL_CB_D6, parseSET_2_A_CB_D7, 
					parseSET_3_B_CB_D8, parseSET_3_C_CB_D9, parseSET_3_D_CB_DA, parseSET_3_E_CB_DB, parseSET_3_H_CB_DC, parseSET_3_L_CB_DD, parseSET_3_SPECIAL_MNEMONIC_HL_CB_DE, parseSET_3_A_CB_DF, 
					parseSET_4_B_CB_E0, parseSET_4_C_CB_E1, parseSET_4_D_CB_E2, parseSET_4_E_CB_E3, parseSET_4_H_CB_E4, parseSET_4_L_CB_E5, parseSET_4_SPECIAL_MNEMONIC_HL_CB_E6, parseSET_4_A_CB_E7, 
					parseSET_5_B_CB_E8, parseSET_5_C_CB_E9, parseSET_5_D_CB_EA, parseSET_5_E_CB_EB, parseSET_5_H_CB_EC, parseSET_5_L_CB_ED, parseSET_5_SPECIAL_MNEMONIC_HL_CB_EE, parseSET_5_A_CB_EF, 
					parseSET_6_B_CB_F0, parseSET_6_C_CB_F1, parseSET_6_D_CB_F2, parseSET_6_E_CB_F3, parseSET_6_H_CB_F4, parseSET_6_L_CB_F5, parseSET_6_SPECIAL_MNEMONIC_HL_CB_F6, parseSET_6_A_CB_F7, 
					parseSET_7_B_CB_F8, parseSET_7_C_CB_F9, parseSET_7_D_CB_FA, parseSET_7_E_CB_FB, parseSET_7_H_CB_FC, parseSET_7_L_CB_FD, parseSET_7_SPECIAL_MNEMONIC_HL_CB_FE, parseSET_7_A_CB_FF, 
				};



inline void processPrefixCBcode(OpCode& code, int& index, std::vector<unsigned char>& buffer, Rom& rom) {

	std::string opcode = {code.first_part, code.second_part};

	CB_MAPPING[(int)code.originalByte](code, index, buffer, rom);
 }

#endif
