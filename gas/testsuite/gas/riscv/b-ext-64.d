#as: -march=rv64i_zba_zbb_zbc_zbe_zbf_zbm_zbp_zbr_zbs_zbt
#source: b-ext-64.s
#objdump: -d

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+60051513[ 	]+clz[ 	]+a0,a0
[ 	]+4:[ 	]+60151513[ 	]+ctz[ 	]+a0,a0
[ 	]+8:[ 	]+60251513[ 	]+cpop[ 	]+a0,a0
[ 	]+c:[ 	]+0ac5c533[ 	]+min[ 	]+a0,a1,a2
[ 	]+10:[ 	]+0ac5d533[ 	]+minu[ 	]+a0,a1,a2
[ 	]+14:[ 	]+0ac5e533[ 	]+max[ 	]+a0,a1,a2
[ 	]+18:[ 	]+0ac5f533[ 	]+maxu[ 	]+a0,a1,a2
[ 	]+1c:[ 	]+60451513[ 	]+sext.b[ 	]+a0,a0
[ 	]+20:[ 	]+60551513[ 	]+sext.h[ 	]+a0,a0
[ 	]+24:[ 	]+0805453b[ 	]+zext.h[ 	]+a0,a0
[ 	]+28:[ 	]+40c5f533[ 	]+andn[ 	]+a0,a1,a2
[ 	]+2c:[ 	]+40c5e533[ 	]+orn[ 	]+a0,a1,a2
[ 	]+30:[ 	]+40c5c533[ 	]+xnor[ 	]+a0,a1,a2
[ 	]+34:[ 	]+60c59533[ 	]+rol[ 	]+a0,a1,a2
[ 	]+38:[ 	]+60c5d533[ 	]+ror[ 	]+a0,a1,a2
[ 	]+3c:[ 	]+6025d513[ 	]+rori[ 	]+a0,a1,0x2
[ 	]+40:[ 	]+6025d513[ 	]+rori[ 	]+a0,a1,0x2
[ 	]+44:[ 	]+20c5a533[ 	]+sh1add[ 	]+a0,a1,a2
[ 	]+48:[ 	]+20c5c533[ 	]+sh2add[ 	]+a0,a1,a2
[ 	]+4c:[ 	]+20c5e533[ 	]+sh3add[ 	]+a0,a1,a2
[ 	]+50:[ 	]+0ac59533[ 	]+clmul[ 	]+a0,a1,a2
[ 	]+54:[ 	]+0ac5b533[ 	]+clmulh[ 	]+a0,a1,a2
[ 	]+58:[ 	]+0ac5a533[ 	]+clmulr[ 	]+a0,a1,a2
[ 	]+5c:[ 	]+6005151b[ 	]+clzw[ 	]+a0,a0
[ 	]+60:[ 	]+6015151b[ 	]+ctzw[ 	]+a0,a0
[ 	]+64:[ 	]+6025151b[ 	]+cpopw[ 	]+a0,a0
[ 	]+68:[ 	]+60c5953b[ 	]+rolw[ 	]+a0,a1,a2
[ 	]+6c:[ 	]+60c5d53b[ 	]+rorw[ 	]+a0,a1,a2
[ 	]+70:[ 	]+6025d51b[ 	]+roriw[ 	]+a0,a1,0x2
[ 	]+74:[ 	]+6025d51b[ 	]+roriw[ 	]+a0,a1,0x2
[ 	]+78:[ 	]+20c5a53b[ 	]+sh1add.uw[ 	]+a0,a1,a2
[ 	]+7c:[ 	]+20c5c53b[ 	]+sh2add.uw[ 	]+a0,a1,a2
[ 	]+80:[ 	]+20c5e53b[ 	]+sh3add.uw[ 	]+a0,a1,a2
[ 	]+84:[ 	]+08c5853b[ 	]+add.uw[ 	]+a0,a1,a2
[ 	]+88:[ 	]+0805853b[ 	]+zext.w[ 	]+a0,a1
[ 	]+8c:[ 	]+0825951b[ 	]+slli.uw[ 	]+a0,a1,0x2
[ 	]+90:[ 	]+08c5c533[ 	]+pack[ 	]+a0,a1,a2
[ 	]+94:[ 	]+48c5c533[ 	]+packu[ 	]+a0,a1,a2
[ 	]+98:[ 	]+08c5f533[ 	]+packh[ 	]+a0,a1,a2
[ 	]+9c:[ 	]+0825c53b[ 	]+packw[ 	]+a0,a1,0x2
[ 	]+a0:[ 	]+4825c53b[ 	]+packuw[ 	]+a0,a1,0x2
[ 	]+a4:[ 	]+68c5d533[ 	]+grev[ 	]+a0,a1,a2
[ 	]+a8:[ 	]+6825d513[ 	]+rev2.n[ 	]+a0,a1
[ 	]+ac:[ 	]+6bf55513[ 	]+rev[ 	]+a0,a0
[ 	]+b0:[ 	]+68155513[ 	]+rev.p[ 	]+a0,a0
[ 	]+b4:[ 	]+68355513[ 	]+rev.n[ 	]+a0,a0
[ 	]+b8:[ 	]+68755513[ 	]+rev.b[ 	]+a0,a0
[ 	]+bc:[ 	]+68f55513[ 	]+rev.h[ 	]+a0,a0
[ 	]+c0:[ 	]+69f55513[ 	]+rev.w[ 	]+a0,a0
[ 	]+c4:[ 	]+6be55513[ 	]+rev2[ 	]+a0,a0
[ 	]+c8:[ 	]+68255513[ 	]+rev2.n[ 	]+a0,a0
[ 	]+cc:[ 	]+68655513[ 	]+rev2.b[ 	]+a0,a0
[ 	]+d0:[ 	]+68e55513[ 	]+rev2.h[ 	]+a0,a0
[ 	]+d4:[ 	]+69e55513[ 	]+rev2.w[ 	]+a0,a0
[ 	]+d8:[ 	]+6bc55513[ 	]+rev4[ 	]+a0,a0
[ 	]+dc:[ 	]+68455513[ 	]+rev4.b[ 	]+a0,a0
[ 	]+e0:[ 	]+68c55513[ 	]+rev4.h[ 	]+a0,a0
[ 	]+e4:[ 	]+69c55513[ 	]+rev4.w[ 	]+a0,a0
[ 	]+e8:[ 	]+6b855513[ 	]+rev8[ 	]+a0,a0
[ 	]+ec:[ 	]+68855513[ 	]+rev8.h[ 	]+a0,a0
[ 	]+f0:[ 	]+69855513[ 	]+rev8.w[ 	]+a0,a0
[ 	]+f4:[ 	]+6b055513[ 	]+rev16[ 	]+a0,a0
[ 	]+f8:[ 	]+69055513[ 	]+rev16.w[ 	]+a0,a0
[ 	]+fc:[ 	]+6a055513[ 	]+rev32[ 	]+a0,a0
[ 	]+100:[ 	]+6825d53b[ 	]+grevw[ 	]+a0,a1,0x2
[ 	]+104:[ 	]+6825d51b[ 	]+greviw[ 	]+a0,a1,0x2
[ 	]+108:[ 	]+28c5d533[ 	]+gorc[ 	]+a0,a1,a2
[ 	]+10c:[ 	]+2825d513[ 	]+orc2.n[ 	]+a0,a1
[ 	]+110:[ 	]+2bf55513[ 	]+orc[ 	]+a0,a0
[ 	]+114:[ 	]+28155513[ 	]+orc.p[ 	]+a0,a0
[ 	]+118:[ 	]+28355513[ 	]+orc.n[ 	]+a0,a0
[ 	]+11c:[ 	]+28755513[ 	]+orc.b[ 	]+a0,a0
[ 	]+120:[ 	]+28f55513[ 	]+orc.h[ 	]+a0,a0
[ 	]+124:[ 	]+29f55513[ 	]+orc.w[ 	]+a0,a0
[ 	]+128:[ 	]+2be55513[ 	]+orc2[ 	]+a0,a0
[ 	]+12c:[ 	]+28255513[ 	]+orc2.n[ 	]+a0,a0
[ 	]+130:[ 	]+28655513[ 	]+orc2.b[ 	]+a0,a0
[ 	]+134:[ 	]+28e55513[ 	]+orc2.h[ 	]+a0,a0
[ 	]+138:[ 	]+29e55513[ 	]+orc2.w[ 	]+a0,a0
[ 	]+13c:[ 	]+2bc55513[ 	]+orc4[ 	]+a0,a0
[ 	]+140:[ 	]+28455513[ 	]+orc4.b[ 	]+a0,a0
[ 	]+144:[ 	]+28c55513[ 	]+orc4.h[ 	]+a0,a0
[ 	]+148:[ 	]+29c55513[ 	]+orc4.w[ 	]+a0,a0
[ 	]+14c:[ 	]+2b855513[ 	]+orc8[ 	]+a0,a0
[ 	]+150:[ 	]+28855513[ 	]+orc8.h[ 	]+a0,a0
[ 	]+154:[ 	]+29855513[ 	]+orc8.w[ 	]+a0,a0
[ 	]+158:[ 	]+2b055513[ 	]+orc16[ 	]+a0,a0
[ 	]+15c:[ 	]+29055513[ 	]+orc16.w[ 	]+a0,a0
[ 	]+160:[ 	]+2a055513[ 	]+orc32[ 	]+a0,a0
[ 	]+164:[ 	]+2825d53b[ 	]+gorcw[ 	]+a0,a1,0x2
[ 	]+168:[ 	]+2825d51b[ 	]+gorciw[ 	]+a0,a1,0x2
[ 	]+16c:[ 	]+08c59533[ 	]+shfl[ 	]+a0,a1,a2
[ 	]+170:[ 	]+08259513[ 	]+zip2.b[ 	]+a0,a1
[ 	]+174:[ 	]+09f51513[ 	]+zip[ 	]+a0,a0
[ 	]+178:[ 	]+08151513[ 	]+zip.n[ 	]+a0,a0
[ 	]+17c:[ 	]+08351513[ 	]+zip.b[ 	]+a0,a0
[ 	]+180:[ 	]+08751513[ 	]+zip.h[ 	]+a0,a0
[ 	]+184:[ 	]+08f51513[ 	]+zip.w[ 	]+a0,a0
[ 	]+188:[ 	]+09e51513[ 	]+zip2[ 	]+a0,a0
[ 	]+18c:[ 	]+08251513[ 	]+zip2.b[ 	]+a0,a0
[ 	]+190:[ 	]+08651513[ 	]+zip2.h[ 	]+a0,a0
[ 	]+194:[ 	]+08e51513[ 	]+zip2.w[ 	]+a0,a0
[ 	]+198:[ 	]+09c51513[ 	]+zip4[ 	]+a0,a0
[ 	]+19c:[ 	]+08451513[ 	]+zip4.h[ 	]+a0,a0
[ 	]+1a0:[ 	]+08c51513[ 	]+zip4.w[ 	]+a0,a0
[ 	]+1a4:[ 	]+09851513[ 	]+zip8[ 	]+a0,a0
[ 	]+1a8:[ 	]+08851513[ 	]+zip8.w[ 	]+a0,a0
[ 	]+1ac:[ 	]+09051513[ 	]+zip16[ 	]+a0,a0
[ 	]+1b0:[ 	]+0825953b[ 	]+shflw[ 	]+a0,a1,0x2
[ 	]+1b4:[ 	]+08c5d533[ 	]+unshfl[ 	]+a0,a1,a2
[ 	]+1b8:[ 	]+0825d513[ 	]+unzip2.b[ 	]+a0,a1
[ 	]+1bc:[ 	]+09f55513[ 	]+unzip[ 	]+a0,a0
[ 	]+1c0:[ 	]+08155513[ 	]+unzip.n[ 	]+a0,a0
[ 	]+1c4:[ 	]+08355513[ 	]+unzip.b[ 	]+a0,a0
[ 	]+1c8:[ 	]+08755513[ 	]+unzip.h[ 	]+a0,a0
[ 	]+1cc:[ 	]+08f55513[ 	]+unzip.w[ 	]+a0,a0
[ 	]+1d0:[ 	]+09e55513[ 	]+unzip2[ 	]+a0,a0
[ 	]+1d4:[ 	]+08255513[ 	]+unzip2.b[ 	]+a0,a0
[ 	]+1d8:[ 	]+08655513[ 	]+unzip2.h[ 	]+a0,a0
[ 	]+1dc:[ 	]+08e55513[ 	]+unzip2.w[ 	]+a0,a0
[ 	]+1e0:[ 	]+09c55513[ 	]+unzip4[ 	]+a0,a0
[ 	]+1e4:[ 	]+08455513[ 	]+unzip4.h[ 	]+a0,a0
[ 	]+1e8:[ 	]+08c55513[ 	]+unzip4.w[ 	]+a0,a0
[ 	]+1ec:[ 	]+09855513[ 	]+unzip8[ 	]+a0,a0
[ 	]+1f0:[ 	]+08855513[ 	]+unzip8.w[ 	]+a0,a0
[ 	]+1f4:[ 	]+09055513[ 	]+unzip16[ 	]+a0,a0
[ 	]+1f8:[ 	]+0825d53b[ 	]+unshflw[ 	]+a0,a1,0x2
[ 	]+1fc:[ 	]+28c5a533[ 	]+xperm.n[ 	]+a0,a1,a2
[ 	]+200:[ 	]+28c5c533[ 	]+xperm.b[ 	]+a0,a1,a2
[ 	]+204:[ 	]+28c5e533[ 	]+xperm.h[ 	]+a0,a1,a2
[ 	]+208:[ 	]+28258533[ 	]+xperm.w[ 	]+a0,a1,0x2
[ 	]+20c:[ 	]+28c59533[ 	]+bset[ 	]+a0,a1,a2
[ 	]+210:[ 	]+48c59533[ 	]+bclr[ 	]+a0,a1,a2
[ 	]+214:[ 	]+68c59533[ 	]+binv[ 	]+a0,a1,a2
[ 	]+218:[ 	]+48c5d533[ 	]+bext[ 	]+a0,a1,a2
[ 	]+21c:[ 	]+48c5e533[ 	]+bdep[ 	]+a0,a1,a2
[ 	]+220:[ 	]+28259513[ 	]+bseti[ 	]+a0,a1,0x2
[ 	]+224:[ 	]+48259513[ 	]+bclri[ 	]+a0,a1,0x2
[ 	]+228:[ 	]+68259513[ 	]+binvi[ 	]+a0,a1,0x2
[ 	]+22c:[ 	]+4825d513[ 	]+bexti[ 	]+a0,a1,0x2
[ 	]+230:[ 	]+28c5953b[ 	]+bsetw[ 	]+a0,a1,a2
[ 	]+234:[ 	]+48c5953b[ 	]+bclrw[ 	]+a0,a1,a2
[ 	]+238:[ 	]+68c5953b[ 	]+binvw[ 	]+a0,a1,a2
[ 	]+23c:[ 	]+48c5d53b[ 	]+bextw[ 	]+a0,a1,a2
[ 	]+240:[ 	]+4825e53b[ 	]+bdepw[ 	]+a0,a1,0x2
[ 	]+244:[ 	]+2825951b[ 	]+bsetiw[ 	]+a0,a1,0x2
[ 	]+248:[ 	]+4825951b[ 	]+bclriw[ 	]+a0,a1,0x2
[ 	]+24c:[ 	]+6825951b[ 	]+binviw[ 	]+a0,a1,0x2
[ 	]+250:[ 	]+20c59533[ 	]+slo[ 	]+a0,a1,a2
[ 	]+254:[ 	]+20c5d533[ 	]+sro[ 	]+a0,a1,a2
[ 	]+258:[ 	]+20259513[ 	]+sloi[ 	]+a0,a1,0x2
[ 	]+25c:[ 	]+2025d513[ 	]+sroi[ 	]+a0,a1,0x2
[ 	]+260:[ 	]+2025953b[ 	]+slow[ 	]+a0,a1,0x2
[ 	]+264:[ 	]+2025d53b[ 	]+srow[ 	]+a0,a1,0x2
[ 	]+268:[ 	]+2025951b[ 	]+sloiw[ 	]+a0,a1,0x2
[ 	]+26c:[ 	]+2025d51b[ 	]+sroiw[ 	]+a0,a1,0x2
[ 	]+270:[ 	]+48c5f533[ 	]+bfp[ 	]+a0,a1,a2
[ 	]+274:[ 	]+4825f53b[ 	]+bfpw[ 	]+a0,a1,0x2
[ 	]+278:[ 	]+08c5b533[ 	]+bmator[ 	]+a0,a1,a2
[ 	]+27c:[ 	]+48c5b533[ 	]+bmatxor[ 	]+a0,a1,a2
[ 	]+280:[ 	]+60351513[ 	]+bmatflip[ 	]+a0,a0
[ 	]+284:[ 	]+61051513[ 	]+crc32.b[ 	]+a0,a0
[ 	]+288:[ 	]+61151513[ 	]+crc32.h[ 	]+a0,a0
[ 	]+28c:[ 	]+61251513[ 	]+crc32.w[ 	]+a0,a0
[ 	]+290:[ 	]+61851513[ 	]+crc32c.b[ 	]+a0,a0
[ 	]+294:[ 	]+61951513[ 	]+crc32c.h[ 	]+a0,a0
[ 	]+298:[ 	]+61a51513[ 	]+crc32c.w[ 	]+a0,a0
[ 	]+29c:[ 	]+61351513[ 	]+crc32.d[ 	]+a0,a0
[ 	]+2a0:[ 	]+61b51513[ 	]+crc32c.d[ 	]+a0,a0
[ 	]+2a4:[ 	]+6ec59533[ 	]+cmix[ 	]+a0,a1,a2,a3
[ 	]+2a8:[ 	]+6ec5d533[ 	]+cmov[ 	]+a0,a1,a2,a3
[ 	]+2ac:[ 	]+6cc59533[ 	]+fsl[ 	]+a0,a1,a2,a3
[ 	]+2b0:[ 	]+6cc5d533[ 	]+fsr[ 	]+a0,a1,a2,a3
[ 	]+2b4:[ 	]+6c25d513[ 	]+fsri[ 	]+a0,a1,0x2,a3
[ 	]+2b8:[ 	]+6c25953b[ 	]+fslw[ 	]+a0,a1,0x2,a3
[ 	]+2bc:[ 	]+6c25b53b[ 	]+fsrw[ 	]+a0,a1,0x2,a3
[ 	]+2c0:[ 	]+6c25d51b[ 	]+fsriw[ 	]+a0,a1,0x2,a3