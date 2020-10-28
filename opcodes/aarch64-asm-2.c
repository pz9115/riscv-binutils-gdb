/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2020 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
    case 2:	/* sbc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
    case 4:	/* sbcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
    case 7:	/* adds */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
    case 10:	/* subs */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
    case 12:	/* add */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
    case 14:	/* adds */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
    case 17:	/* subs */
      value = 17;	/* --> subs.  */
      break;
    case 23:	/* cmn */
    case 22:	/* adds */
      value = 22;	/* --> adds.  */
      break;
    case 25:	/* neg */
    case 24:	/* sub */
      value = 24;	/* --> sub.  */
      break;
    case 27:	/* cmp */
    case 28:	/* negs */
    case 26:	/* subs */
      value = 26;	/* --> subs.  */
      break;
    case 153:	/* mov */
    case 152:	/* umov */
      value = 152;	/* --> umov.  */
      break;
    case 155:	/* mov */
    case 154:	/* ins */
      value = 154;	/* --> ins.  */
      break;
    case 157:	/* mov */
    case 156:	/* ins */
      value = 156;	/* --> ins.  */
      break;
    case 243:	/* mvn */
    case 242:	/* not */
      value = 242;	/* --> not.  */
      break;
    case 318:	/* mov */
    case 317:	/* orr */
      value = 317;	/* --> orr.  */
      break;
    case 389:	/* sxtl */
    case 388:	/* sshll */
      value = 388;	/* --> sshll.  */
      break;
    case 391:	/* sxtl2 */
    case 390:	/* sshll2 */
      value = 390;	/* --> sshll2.  */
      break;
    case 413:	/* uxtl */
    case 412:	/* ushll */
      value = 412;	/* --> ushll.  */
      break;
    case 415:	/* uxtl2 */
    case 414:	/* ushll2 */
      value = 414;	/* --> ushll2.  */
      break;
    case 536:	/* mov */
    case 535:	/* dup */
      value = 535;	/* --> dup.  */
      break;
    case 623:	/* sxtw */
    case 622:	/* sxth */
    case 621:	/* sxtb */
    case 624:	/* asr */
    case 620:	/* sbfx */
    case 619:	/* sbfiz */
    case 618:	/* sbfm */
      value = 618;	/* --> sbfm.  */
      break;
    case 627:	/* bfc */
    case 628:	/* bfxil */
    case 626:	/* bfi */
    case 625:	/* bfm */
      value = 625;	/* --> bfm.  */
      break;
    case 633:	/* uxth */
    case 632:	/* uxtb */
    case 635:	/* lsr */
    case 634:	/* lsl */
    case 631:	/* ubfx */
    case 630:	/* ubfiz */
    case 629:	/* ubfm */
      value = 629;	/* --> ubfm.  */
      break;
    case 665:	/* cset */
    case 664:	/* cinc */
    case 663:	/* csinc */
      value = 663;	/* --> csinc.  */
      break;
    case 668:	/* csetm */
    case 667:	/* cinv */
    case 666:	/* csinv */
      value = 666;	/* --> csinv.  */
      break;
    case 670:	/* cneg */
    case 669:	/* csneg */
      value = 669;	/* --> csneg.  */
      break;
    case 688:	/* rev */
    case 689:	/* rev64 */
      value = 688;	/* --> rev.  */
      break;
    case 714:	/* lsl */
    case 713:	/* lslv */
      value = 713;	/* --> lslv.  */
      break;
    case 716:	/* lsr */
    case 715:	/* lsrv */
      value = 715;	/* --> lsrv.  */
      break;
    case 718:	/* asr */
    case 717:	/* asrv */
      value = 717;	/* --> asrv.  */
      break;
    case 720:	/* ror */
    case 719:	/* rorv */
      value = 719;	/* --> rorv.  */
      break;
    case 723:	/* cmpp */
    case 722:	/* subps */
      value = 722;	/* --> subps.  */
      break;
    case 736:	/* mul */
    case 735:	/* madd */
      value = 735;	/* --> madd.  */
      break;
    case 738:	/* mneg */
    case 737:	/* msub */
      value = 737;	/* --> msub.  */
      break;
    case 740:	/* smull */
    case 739:	/* smaddl */
      value = 739;	/* --> smaddl.  */
      break;
    case 742:	/* smnegl */
    case 741:	/* smsubl */
      value = 741;	/* --> smsubl.  */
      break;
    case 745:	/* umull */
    case 744:	/* umaddl */
      value = 744;	/* --> umaddl.  */
      break;
    case 747:	/* umnegl */
    case 746:	/* umsubl */
      value = 746;	/* --> umsubl.  */
      break;
    case 759:	/* ror */
    case 758:	/* extr */
      value = 758;	/* --> extr.  */
      break;
    case 992:	/* bic */
    case 991:	/* and */
      value = 991;	/* --> and.  */
      break;
    case 994:	/* mov */
    case 993:	/* orr */
      value = 993;	/* --> orr.  */
      break;
    case 997:	/* tst */
    case 996:	/* ands */
      value = 996;	/* --> ands.  */
      break;
    case 1002:	/* uxtw */
    case 1001:	/* mov */
    case 1000:	/* orr */
      value = 1000;	/* --> orr.  */
      break;
    case 1004:	/* mvn */
    case 1003:	/* orn */
      value = 1003;	/* --> orn.  */
      break;
    case 1008:	/* tst */
    case 1007:	/* ands */
      value = 1007;	/* --> ands.  */
      break;
    case 1134:	/* staddb */
    case 1038:	/* ldaddb */
      value = 1038;	/* --> ldaddb.  */
      break;
    case 1135:	/* staddh */
    case 1039:	/* ldaddh */
      value = 1039;	/* --> ldaddh.  */
      break;
    case 1136:	/* stadd */
    case 1040:	/* ldadd */
      value = 1040;	/* --> ldadd.  */
      break;
    case 1137:	/* staddlb */
    case 1042:	/* ldaddlb */
      value = 1042;	/* --> ldaddlb.  */
      break;
    case 1138:	/* staddlh */
    case 1045:	/* ldaddlh */
      value = 1045;	/* --> ldaddlh.  */
      break;
    case 1139:	/* staddl */
    case 1048:	/* ldaddl */
      value = 1048;	/* --> ldaddl.  */
      break;
    case 1140:	/* stclrb */
    case 1050:	/* ldclrb */
      value = 1050;	/* --> ldclrb.  */
      break;
    case 1141:	/* stclrh */
    case 1051:	/* ldclrh */
      value = 1051;	/* --> ldclrh.  */
      break;
    case 1142:	/* stclr */
    case 1052:	/* ldclr */
      value = 1052;	/* --> ldclr.  */
      break;
    case 1143:	/* stclrlb */
    case 1054:	/* ldclrlb */
      value = 1054;	/* --> ldclrlb.  */
      break;
    case 1144:	/* stclrlh */
    case 1057:	/* ldclrlh */
      value = 1057;	/* --> ldclrlh.  */
      break;
    case 1145:	/* stclrl */
    case 1060:	/* ldclrl */
      value = 1060;	/* --> ldclrl.  */
      break;
    case 1146:	/* steorb */
    case 1062:	/* ldeorb */
      value = 1062;	/* --> ldeorb.  */
      break;
    case 1147:	/* steorh */
    case 1063:	/* ldeorh */
      value = 1063;	/* --> ldeorh.  */
      break;
    case 1148:	/* steor */
    case 1064:	/* ldeor */
      value = 1064;	/* --> ldeor.  */
      break;
    case 1149:	/* steorlb */
    case 1066:	/* ldeorlb */
      value = 1066;	/* --> ldeorlb.  */
      break;
    case 1150:	/* steorlh */
    case 1069:	/* ldeorlh */
      value = 1069;	/* --> ldeorlh.  */
      break;
    case 1151:	/* steorl */
    case 1072:	/* ldeorl */
      value = 1072;	/* --> ldeorl.  */
      break;
    case 1152:	/* stsetb */
    case 1074:	/* ldsetb */
      value = 1074;	/* --> ldsetb.  */
      break;
    case 1153:	/* stseth */
    case 1075:	/* ldseth */
      value = 1075;	/* --> ldseth.  */
      break;
    case 1154:	/* stset */
    case 1076:	/* ldset */
      value = 1076;	/* --> ldset.  */
      break;
    case 1155:	/* stsetlb */
    case 1078:	/* ldsetlb */
      value = 1078;	/* --> ldsetlb.  */
      break;
    case 1156:	/* stsetlh */
    case 1081:	/* ldsetlh */
      value = 1081;	/* --> ldsetlh.  */
      break;
    case 1157:	/* stsetl */
    case 1084:	/* ldsetl */
      value = 1084;	/* --> ldsetl.  */
      break;
    case 1158:	/* stsmaxb */
    case 1086:	/* ldsmaxb */
      value = 1086;	/* --> ldsmaxb.  */
      break;
    case 1159:	/* stsmaxh */
    case 1087:	/* ldsmaxh */
      value = 1087;	/* --> ldsmaxh.  */
      break;
    case 1160:	/* stsmax */
    case 1088:	/* ldsmax */
      value = 1088;	/* --> ldsmax.  */
      break;
    case 1161:	/* stsmaxlb */
    case 1090:	/* ldsmaxlb */
      value = 1090;	/* --> ldsmaxlb.  */
      break;
    case 1162:	/* stsmaxlh */
    case 1093:	/* ldsmaxlh */
      value = 1093;	/* --> ldsmaxlh.  */
      break;
    case 1163:	/* stsmaxl */
    case 1096:	/* ldsmaxl */
      value = 1096;	/* --> ldsmaxl.  */
      break;
    case 1164:	/* stsminb */
    case 1098:	/* ldsminb */
      value = 1098;	/* --> ldsminb.  */
      break;
    case 1165:	/* stsminh */
    case 1099:	/* ldsminh */
      value = 1099;	/* --> ldsminh.  */
      break;
    case 1166:	/* stsmin */
    case 1100:	/* ldsmin */
      value = 1100;	/* --> ldsmin.  */
      break;
    case 1167:	/* stsminlb */
    case 1102:	/* ldsminlb */
      value = 1102;	/* --> ldsminlb.  */
      break;
    case 1168:	/* stsminlh */
    case 1105:	/* ldsminlh */
      value = 1105;	/* --> ldsminlh.  */
      break;
    case 1169:	/* stsminl */
    case 1108:	/* ldsminl */
      value = 1108;	/* --> ldsminl.  */
      break;
    case 1170:	/* stumaxb */
    case 1110:	/* ldumaxb */
      value = 1110;	/* --> ldumaxb.  */
      break;
    case 1171:	/* stumaxh */
    case 1111:	/* ldumaxh */
      value = 1111;	/* --> ldumaxh.  */
      break;
    case 1172:	/* stumax */
    case 1112:	/* ldumax */
      value = 1112;	/* --> ldumax.  */
      break;
    case 1173:	/* stumaxlb */
    case 1114:	/* ldumaxlb */
      value = 1114;	/* --> ldumaxlb.  */
      break;
    case 1174:	/* stumaxlh */
    case 1117:	/* ldumaxlh */
      value = 1117;	/* --> ldumaxlh.  */
      break;
    case 1175:	/* stumaxl */
    case 1120:	/* ldumaxl */
      value = 1120;	/* --> ldumaxl.  */
      break;
    case 1176:	/* stuminb */
    case 1122:	/* lduminb */
      value = 1122;	/* --> lduminb.  */
      break;
    case 1177:	/* stuminh */
    case 1123:	/* lduminh */
      value = 1123;	/* --> lduminh.  */
      break;
    case 1178:	/* stumin */
    case 1124:	/* ldumin */
      value = 1124;	/* --> ldumin.  */
      break;
    case 1179:	/* stuminlb */
    case 1126:	/* lduminlb */
      value = 1126;	/* --> lduminlb.  */
      break;
    case 1180:	/* stuminlh */
    case 1129:	/* lduminlh */
      value = 1129;	/* --> lduminlh.  */
      break;
    case 1181:	/* stuminl */
    case 1132:	/* lduminl */
      value = 1132;	/* --> lduminl.  */
      break;
    case 1183:	/* mov */
    case 1182:	/* movn */
      value = 1182;	/* --> movn.  */
      break;
    case 1185:	/* mov */
    case 1184:	/* movz */
      value = 1184;	/* --> movz.  */
      break;
    case 1241:	/* autibsp */
    case 1240:	/* autibz */
    case 1239:	/* autiasp */
    case 1238:	/* autiaz */
    case 1237:	/* pacibsp */
    case 1236:	/* pacibz */
    case 1235:	/* paciasp */
    case 1234:	/* paciaz */
    case 1211:	/* tsb */
    case 1210:	/* psb */
    case 1209:	/* esb */
    case 1208:	/* autib1716 */
    case 1207:	/* autia1716 */
    case 1206:	/* pacib1716 */
    case 1205:	/* pacia1716 */
    case 1204:	/* xpaclri */
    case 1202:	/* sevl */
    case 1201:	/* sev */
    case 1200:	/* wfi */
    case 1199:	/* wfe */
    case 1198:	/* yield */
    case 1197:	/* bti */
    case 1196:	/* csdb */
    case 1195:	/* nop */
    case 1194:	/* hint */
      value = 1194;	/* --> hint.  */
      break;
    case 1217:	/* pssbb */
    case 1216:	/* ssbb */
    case 1215:	/* dfb */
    case 1213:	/* dsb */
      value = 1213;	/* --> dsb.  */
      break;
    case 1214:	/* dsb */
      value = 1214;	/* --> dsb.  */
      break;
    case 1229:	/* cpp */
    case 1228:	/* dvp */
    case 1227:	/* cfp */
    case 1225:	/* tlbi */
    case 1224:	/* ic */
    case 1223:	/* dc */
    case 1222:	/* at */
    case 1221:	/* sys */
      value = 1221;	/* --> sys.  */
      break;
    case 1226:	/* wfet */
      value = 1226;	/* --> wfet.  */
      break;
    case 2039:	/* bic */
    case 1289:	/* and */
      value = 1289;	/* --> and.  */
      break;
    case 1272:	/* mov */
    case 1291:	/* and */
      value = 1291;	/* --> and.  */
      break;
    case 1276:	/* movs */
    case 1292:	/* ands */
      value = 1292;	/* --> ands.  */
      break;
    case 2040:	/* cmple */
    case 1327:	/* cmpge */
      value = 1327;	/* --> cmpge.  */
      break;
    case 2043:	/* cmplt */
    case 1330:	/* cmpgt */
      value = 1330;	/* --> cmpgt.  */
      break;
    case 2041:	/* cmplo */
    case 1332:	/* cmphi */
      value = 1332;	/* --> cmphi.  */
      break;
    case 2042:	/* cmpls */
    case 1335:	/* cmphs */
      value = 1335;	/* --> cmphs.  */
      break;
    case 1269:	/* mov */
    case 1357:	/* cpy */
      value = 1357;	/* --> cpy.  */
      break;
    case 1271:	/* mov */
    case 1358:	/* cpy */
      value = 1358;	/* --> cpy.  */
      break;
    case 2050:	/* fmov */
    case 1274:	/* mov */
    case 1359:	/* cpy */
      value = 1359;	/* --> cpy.  */
      break;
    case 1264:	/* mov */
    case 1371:	/* dup */
      value = 1371;	/* --> dup.  */
      break;
    case 1266:	/* mov */
    case 1263:	/* mov */
    case 1372:	/* dup */
      value = 1372;	/* --> dup.  */
      break;
    case 2049:	/* fmov */
    case 1268:	/* mov */
    case 1373:	/* dup */
      value = 1373;	/* --> dup.  */
      break;
    case 1267:	/* mov */
    case 1374:	/* dupm */
      value = 1374;	/* --> dupm.  */
      break;
    case 2044:	/* eon */
    case 1376:	/* eor */
      value = 1376;	/* --> eor.  */
      break;
    case 1277:	/* not */
    case 1378:	/* eor */
      value = 1378;	/* --> eor.  */
      break;
    case 1278:	/* nots */
    case 1379:	/* eors */
      value = 1379;	/* --> eors.  */
      break;
    case 2045:	/* facle */
    case 1384:	/* facge */
      value = 1384;	/* --> facge.  */
      break;
    case 2046:	/* faclt */
    case 1385:	/* facgt */
      value = 1385;	/* --> facgt.  */
      break;
    case 2047:	/* fcmle */
    case 1398:	/* fcmge */
      value = 1398;	/* --> fcmge.  */
      break;
    case 2048:	/* fcmlt */
    case 1400:	/* fcmgt */
      value = 1400;	/* --> fcmgt.  */
      break;
    case 1261:	/* fmov */
    case 1406:	/* fcpy */
      value = 1406;	/* --> fcpy.  */
      break;
    case 1260:	/* fmov */
    case 1429:	/* fdup */
      value = 1429;	/* --> fdup.  */
      break;
    case 1262:	/* mov */
    case 1760:	/* orr */
      value = 1760;	/* --> orr.  */
      break;
    case 2051:	/* orn */
    case 1761:	/* orr */
      value = 1761;	/* --> orr.  */
      break;
    case 1265:	/* mov */
    case 1763:	/* orr */
      value = 1763;	/* --> orr.  */
      break;
    case 1275:	/* movs */
    case 1764:	/* orrs */
      value = 1764;	/* --> orrs.  */
      break;
    case 1270:	/* mov */
    case 1826:	/* sel */
      value = 1826;	/* --> sel.  */
      break;
    case 1273:	/* mov */
    case 1827:	/* sel */
      value = 1827;	/* --> sel.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

bfd_boolean
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst,
			   aarch64_operand_error *errors)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 16:
    case 17:
    case 18:
    case 19:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 189:
    case 190:
    case 191:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 203:
    case 206:
      return aarch64_ins_regno (self, info, code, inst, errors);
    case 14:
      return aarch64_ins_reg_extended (self, info, code, inst, errors);
    case 15:
      return aarch64_ins_reg_shifted (self, info, code, inst, errors);
    case 20:
      return aarch64_ins_ft (self, info, code, inst, errors);
    case 31:
    case 32:
    case 33:
    case 34:
    case 209:
      return aarch64_ins_reglane (self, info, code, inst, errors);
    case 35:
      return aarch64_ins_reglist (self, info, code, inst, errors);
    case 36:
      return aarch64_ins_ldst_reglist (self, info, code, inst, errors);
    case 37:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst, errors);
    case 38:
      return aarch64_ins_ldst_elemlist (self, info, code, inst, errors);
    case 39:
    case 40:
    case 41:
    case 42:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 80:
    case 81:
    case 82:
    case 83:
    case 162:
    case 164:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 208:
      return aarch64_ins_imm (self, info, code, inst, errors);
    case 43:
    case 44:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst, errors);
    case 45:
    case 46:
    case 47:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst, errors);
    case 51:
    case 152:
      return aarch64_ins_fpimm (self, info, code, inst, errors);
    case 69:
    case 160:
      return aarch64_ins_limm (self, info, code, inst, errors);
    case 70:
      return aarch64_ins_aimm (self, info, code, inst, errors);
    case 71:
      return aarch64_ins_imm_half (self, info, code, inst, errors);
    case 72:
      return aarch64_ins_fbits (self, info, code, inst, errors);
    case 74:
    case 75:
    case 157:
      return aarch64_ins_imm_rotate2 (self, info, code, inst, errors);
    case 76:
    case 156:
    case 158:
      return aarch64_ins_imm_rotate1 (self, info, code, inst, errors);
    case 77:
    case 78:
      return aarch64_ins_cond (self, info, code, inst, errors);
    case 84:
    case 93:
      return aarch64_ins_addr_simple (self, info, code, inst, errors);
    case 85:
      return aarch64_ins_addr_regoff (self, info, code, inst, errors);
    case 86:
    case 87:
    case 88:
    case 90:
    case 92:
      return aarch64_ins_addr_simm (self, info, code, inst, errors);
    case 89:
      return aarch64_ins_addr_simm10 (self, info, code, inst, errors);
    case 91:
      return aarch64_ins_addr_uimm12 (self, info, code, inst, errors);
    case 94:
      return aarch64_ins_addr_offset (self, info, code, inst, errors);
    case 95:
      return aarch64_ins_simd_addr_post (self, info, code, inst, errors);
    case 96:
      return aarch64_ins_sysreg (self, info, code, inst, errors);
    case 97:
      return aarch64_ins_pstatefield (self, info, code, inst, errors);
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
      return aarch64_ins_sysins_op (self, info, code, inst, errors);
    case 103:
    case 105:
      return aarch64_ins_barrier (self, info, code, inst, errors);
    case 104:
      return aarch64_ins_barrier_dsb_nxs (self, info, code, inst, errors);
    case 106:
      return aarch64_ins_prfop (self, info, code, inst, errors);
    case 107:
      return aarch64_ins_none (self, info, code, inst, errors);
    case 108:
      return aarch64_ins_hint (self, info, code, inst, errors);
    case 109:
    case 110:
      return aarch64_ins_sve_addr_ri_s4 (self, info, code, inst, errors);
    case 111:
    case 112:
    case 113:
    case 114:
      return aarch64_ins_sve_addr_ri_s4xvl (self, info, code, inst, errors);
    case 115:
      return aarch64_ins_sve_addr_ri_s6xvl (self, info, code, inst, errors);
    case 116:
      return aarch64_ins_sve_addr_ri_s9xvl (self, info, code, inst, errors);
    case 117:
    case 118:
    case 119:
    case 120:
      return aarch64_ins_sve_addr_ri_u6 (self, info, code, inst, errors);
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
      return aarch64_ins_sve_addr_rr_lsl (self, info, code, inst, errors);
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
      return aarch64_ins_sve_addr_rz_xtw (self, info, code, inst, errors);
    case 143:
    case 144:
    case 145:
    case 146:
      return aarch64_ins_sve_addr_zi_u5 (self, info, code, inst, errors);
    case 147:
      return aarch64_ins_sve_addr_zz_lsl (self, info, code, inst, errors);
    case 148:
      return aarch64_ins_sve_addr_zz_sxtw (self, info, code, inst, errors);
    case 149:
      return aarch64_ins_sve_addr_zz_uxtw (self, info, code, inst, errors);
    case 150:
      return aarch64_ins_sve_aimm (self, info, code, inst, errors);
    case 151:
      return aarch64_ins_sve_asimm (self, info, code, inst, errors);
    case 153:
      return aarch64_ins_sve_float_half_one (self, info, code, inst, errors);
    case 154:
      return aarch64_ins_sve_float_half_two (self, info, code, inst, errors);
    case 155:
      return aarch64_ins_sve_float_zero_one (self, info, code, inst, errors);
    case 159:
      return aarch64_ins_inv_limm (self, info, code, inst, errors);
    case 161:
      return aarch64_ins_sve_limm_mov (self, info, code, inst, errors);
    case 163:
      return aarch64_ins_sve_scale (self, info, code, inst, errors);
    case 175:
    case 176:
    case 177:
      return aarch64_ins_sve_shlimm (self, info, code, inst, errors);
    case 178:
    case 179:
    case 180:
      return aarch64_ins_sve_shrimm (self, info, code, inst, errors);
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
      return aarch64_ins_sve_quad_index (self, info, code, inst, errors);
    case 204:
      return aarch64_ins_sve_index (self, info, code, inst, errors);
    case 205:
    case 207:
      return aarch64_ins_sve_reglist (self, info, code, inst, errors);
    default: assert (0); abort ();
    }
}
