#include <idc.idc>

static main(void)
{
  // set 'loading idc file' mode
  SetCharPrm(INF_GENFLAGS, INFFL_LOADIDC|GetCharPrm(INF_GENFLAGS));
  Patches();            // manual patches
  // clear 'loading idc file' mode
  SetCharPrm(INF_GENFLAGS, ~INFFL_LOADIDC&GetCharPrm(INF_GENFLAGS));
}

//------------------------------------------------------------------------
// Information about patches

static Patches(void) {
	PatchByte	(0X80093AC,	0X53);
	PatchByte	(0X80093AD,	0XA8);
	PatchByte	(0X80093AE,	0X8E);
	PatchByte	(0X80093AF,	0X6);
	PatchByte	(0X80093B8,	0X80);
	PatchByte	(0X80093B9,	0X5B);
	PatchByte	(0X80093BA,	0X40);
	PatchByte	(0X80093BB,	0XF8);
	PatchByte	(0X80093BC,	0X80);
	PatchByte	(0X80093BD,	0XDF);
	PatchByte	(0X80093BE,	0X17);
	PatchByte	(0X80093BF,	0X10);
	PatchByte	(0X8009440,	0X53);
	PatchByte	(0X8009441,	0XA8);
	PatchByte	(0X8009442,	0X8E);
	PatchByte	(0X8009443,	0X6);
	PatchByte	(0X800944C,	0X80);
	PatchByte	(0X800944D,	0X5B);
	PatchByte	(0X800944E,	0X40);
	PatchByte	(0X800944F,	0XF8);
	PatchByte	(0X8009450,	0X80);
	PatchByte	(0X8009451,	0XDF);
	PatchByte	(0X8009452,	0X17);
	PatchByte	(0X8009453,	0X10);
	PatchByte	(0X80094A2,	0X9);
	PatchByte	(0X80094A6,	0X11);
	PatchByte	(0X80094A7,	0X4A);
	PatchByte	(0X80094A8,	0X91);
	PatchByte	(0X80094A9,	0X42);
	PatchByte	(0X80094AA,	0);
	PatchByte	(0X80094AB,	0XD3);
	PatchByte	(0X80094AC,	0X5);
	PatchByte	(0X80094AD,	0X20);
	PatchByte	(0X80094AE,	0X70);
	PatchByte	(0X80094AF,	0X47);
	PatchByte	(0X80094B0,	0XC0);
	PatchByte	(0X80094B1,	0X46);
	PatchByte	(0X80094B2,	0XC0);
	PatchByte	(0X80094B3,	0X46);
	PatchByte	(0X80094B4,	0XC0);
	PatchByte	(0X80094B5,	0X46);
	PatchByte	(0X80094B6,	0XC0);
	PatchByte	(0X80094B7,	0X46);
	PatchByte	(0X80094C0,	0XBF);
	PatchByte	(0X80094C1,	0X7A);
	PatchByte	(0X80094C2,	0XF2);
	PatchByte	(0X80094C3,	0X4);
	PatchByte	(0X80094E4,	0X80);
	PatchByte	(0X80094E5,	0X5B);
	PatchByte	(0X80094E6,	0X40);
	PatchByte	(0X80094E7,	0XF8);
	PatchByte	(0X80094E9,	0XDF);
	PatchByte	(0X80094EA,	0X17);
	PatchByte	(0X80094EB,	0X10);
	PatchByte	(0X80094EC,	0);
	PatchByte	(0X80094ED,	0X24);
	PatchByte	(0X80094EE,	0XF4);
	PatchByte	(0X80094EF,	0);
	PatchByte	(0X800D754,	0X80);
	PatchByte	(0X800D755,	0X5B);
	PatchByte	(0X800D756,	0X40);
	PatchByte	(0X800D757,	0XF8);
	PatchByte	(0X800D758,	0X81);
	PatchByte	(0X800D759,	0XDF);
	PatchByte	(0X800D75A,	0X17);
	PatchByte	(0X800D75B,	0X10);
	PatchByte	(0X800FB68,	0X80);
	PatchByte	(0X800FB69,	0X5B);
	PatchByte	(0X800FB6A,	0X40);
	PatchByte	(0X800FB6B,	0XF8);
	PatchByte	(0X800FB6C,	0X80);
	PatchByte	(0X800FB6D,	0XDF);
	PatchByte	(0X800FB6E,	0X17);
	PatchByte	(0X800FB6F,	0X10);
	PatchByte	(0X80167F4,	0X80);
	PatchByte	(0X80167F5,	0XDF);
	PatchByte	(0X80167F6,	0X17);
	PatchByte	(0X80167F7,	0X10);
	PatchByte	(0X801680C,	0X80);
	PatchByte	(0X801680D,	0X5B);
	PatchByte	(0X801680E,	0X40);
	PatchByte	(0X801680F,	0XF8);
	PatchByte	(0X8016AC8,	0X80);
	PatchByte	(0X8016AC9,	0XDF);
	PatchByte	(0X8016ACA,	0X17);
	PatchByte	(0X8016ACB,	0X10);
	PatchByte	(0X8016AD4,	0X80);
	PatchByte	(0X8016AD5,	0X5B);
	PatchByte	(0X8016AD6,	0X40);
	PatchByte	(0X8016AD7,	0XF8);
	PatchByte	(0X8016EAC,	0X80);
	PatchByte	(0X8016EAD,	0X5B);
	PatchByte	(0X8016EAE,	0X40);
	PatchByte	(0X8016EAF,	0XF8);
	PatchByte	(0X8016EB0,	0X80);
	PatchByte	(0X8016EB1,	0XDF);
	PatchByte	(0X8016EB2,	0X17);
	PatchByte	(0X8016EB3,	0X10);
	PatchByte	(0X8020968,	0XFF);
	PatchByte	(0X8020969,	0XB3);
	PatchByte	(0X802096A,	0XC4);
	PatchByte	(0X802096B,	0X4);
	PatchByte	(0X802096C,	0X80);
	PatchByte	(0X802096D,	0X5B);
	PatchByte	(0X802096E,	0X40);
	PatchByte	(0X802096F,	0XF8);
	PatchByte	(0X8020970,	0X80);
	PatchByte	(0X8020971,	0XDF);
	PatchByte	(0X8020972,	0X17);
	PatchByte	(0X8020973,	0X10);
	PatchByte	(0X8020BA4,	0XFF);
	PatchByte	(0X8020BA5,	0XB3);
	PatchByte	(0X8020BA6,	0XC4);
	PatchByte	(0X8020BA7,	0X4);
	PatchByte	(0X8020BA8,	0X80);
	PatchByte	(0X8020BA9,	0X5B);
	PatchByte	(0X8020BAA,	0X40);
	PatchByte	(0X8020BAB,	0XF8);
	PatchByte	(0X8020BAC,	0X80);
	PatchByte	(0X8020BAD,	0XDF);
	PatchByte	(0X8020BAE,	0X17);
	PatchByte	(0X8020BAF,	0X10);
	PatchByte	(0X8020C3C,	0XFF);
	PatchByte	(0X8020C3D,	0XB3);
	PatchByte	(0X8020C3E,	0XC4);
	PatchByte	(0X8020C3F,	0X4);
	PatchByte	(0X8020C40,	0X80);
	PatchByte	(0X8020C41,	0X5B);
	PatchByte	(0X8020C42,	0X40);
	PatchByte	(0X8020C43,	0XF8);
	PatchByte	(0X8020C44,	0X80);
	PatchByte	(0X8020C45,	0XDF);
	PatchByte	(0X8020C46,	0X17);
	PatchByte	(0X8020C47,	0X10);
	PatchByte	(0X8021074,	0X80);
	PatchByte	(0X8021075,	0XA4);
	PatchByte	(0X8021076,	0XBF);
	PatchByte	(0X8021077,	0X7);
	PatchByte	(0X8021079,	0X84);
	PatchByte	(0X802107A,	0XD7);
	PatchByte	(0X802107B,	0X17);
	PatchByte	(0X8025168,	0X80);
	PatchByte	(0X8025169,	0X5B);
	PatchByte	(0X802516A,	0X40);
	PatchByte	(0X802516B,	0XF8);
	PatchByte	(0X802516C,	0X81);
	PatchByte	(0X802516D,	0XDF);
	PatchByte	(0X802516E,	0X17);
	PatchByte	(0X802516F,	0X10);
	PatchByte	(0X8025690,	0X80);
	PatchByte	(0X8025691,	0X5B);
	PatchByte	(0X8025692,	0X40);
	PatchByte	(0X8025693,	0XF8);
	PatchByte	(0X8025694,	0X81);
	PatchByte	(0X8025695,	0XDF);
	PatchByte	(0X8025696,	0X17);
	PatchByte	(0X8025697,	0X10);
	PatchByte	(0X80297F0,	0X80);
	PatchByte	(0X80297F1,	0X5B);
	PatchByte	(0X80297F2,	0X40);
	PatchByte	(0X80297F3,	0XF8);
	PatchByte	(0X80297F4,	0X81);
	PatchByte	(0X80297F5,	0XDF);
	PatchByte	(0X80297F6,	0X17);
	PatchByte	(0X80297F7,	0X10);
	PatchByte	(0X8029810,	0);
	PatchByte	(0X8029811,	0X92);
	PatchByte	(0X8029812,	0XFE);
	PatchByte	(0X8029813,	0X1E);
	PatchByte	(0X8029958,	0X80);
	PatchByte	(0X8029959,	0X5B);
	PatchByte	(0X802995A,	0X40);
	PatchByte	(0X802995B,	0XF8);
	PatchByte	(0X802995C,	0X81);
	PatchByte	(0X802995D,	0XDF);
	PatchByte	(0X802995E,	0X17);
	PatchByte	(0X802995F,	0X10);
	PatchByte	(0X8029978,	0);
	PatchByte	(0X8029979,	0X92);
	PatchByte	(0X802997A,	0XFE);
	PatchByte	(0X802997B,	0X1E);
}
