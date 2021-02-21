/*
inline wchar_t tolower_2112(wchar_t ch)
{
	extern const wchar_t casemap_l_2112[];
	return ch + casemap_l_2112[ casemap_l_2112[ casemap_l_2112[ch >> 8] + ((ch >> 3) & 0x1f) ] + (ch & 0x07) ];
}
*/

const wchar_t casemap_l_2112[1056] = 
{
	/* index sequence offsets */
	0x0239, 0x01f6, 0x0215, 0x01bc, 0x013f, 0x0159, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x0165, 0x025d, 0x025d, 0x0269, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x0190, 0x025d, 0x01dc, 0x0288, 
	0x025d, 0x017f, 0x025d, 0x025d, 0x021f, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x0100, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x01a8, 0x011f, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 
	0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x025d, 0x0255, 
	/* index sequence values */
	0x02ef, 0x02ef, 0x02ef, 0x02ef, 0x02ef, 0x02f1, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02fe, 0x02de, 0x0385, 0x037d, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x031c, 0x039f, 0x0388, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x0303, 0x03bc, 0x0303, 0x03bc, 0x03bc, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x02ca, 0x02f8, 0x03bc, 
	0x03d5, 0x0307, 0x03bc, 0x03bc, 0x03ac, 0x03fc, 0x03bc, 0x03a5, 
	0x037b, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x0377, 0x02ca, 0x03ec, 
	0x03ec, 0x0338, 0x0338, 0x0338, 0x0338, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x038a, 
	0x0303, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x0315, 
	0x0319, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x02ed, 
	0x02ef, 0x02ef, 0x02ef, 0x02f1, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x03c6, 0x03c6, 0x03c6, 0x03c6, 0x03c8, 0x031f, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x0358, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x0418, 0x0418, 0x02ca, 0x02ca, 0x0379, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ad, 0x02ad, 0x02ad, 0x02ad, 0x02ad, 0x02a8, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x0305, 0x02ca, 0x02ca, 
	0x03bc, 0x03bc, 0x03bc, 0x031c, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x0307, 0x02cc, 0x0341, 0x03f4, 0x0336, 0x0338, 
	0x0334, 0x033d, 0x02ca, 0x02ca, 0x02ca, 0x035b, 0x02ca, 0x03bc, 
	0x03bc, 0x03bc, 0x0375, 0x03b3, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x0305, 0x02ca, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x0303, 0x0317, 0x0317, 0x0303, 
	0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x03bc, 0x02e6, 0x0348, 0x03dc, 
	0x0410, 0x030d, 0x03be, 0x0408, 0x032c, 0x0309, 0x02b9, 0x02da, 
	0x0317, 0x03a1, 0x03bc, 0x03bc, 0x02bf, 0x03bc, 0x03bc, 0x03bc, 
	0x03bc, 0x03ba, 0x03bc, 0x031c, 0x0325, 0x0401, 0x03bc, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x038c, 0x0392, 0x0392, 
	0x0392, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x0336, 0x0338, 0x0338, 0x02c7, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x0338, 0x0338, 0x033a, 0x033a, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x0336, 0x0338, 0x0338, 0x02c7, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 
	0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x02ca, 0x03e4, 0x03e4, 0x03e4, 
	0x03e4, 0x03e4, 0x03e4, 0x03e4, 0x03e4, 0x03e4, 0x03e4, 0x0362, 
	0x02ca, 0x0350, 0x02ca, 0x0352, 0x02ca, 0x0350, 0x02ca, 0x0350, 
	0x02ca, 0x0352, 0x02ca, 0x0369, 0x02ca, 0x0350, 0x02ca, 0x02ca, 
	0x02ca, 0x0350, 0x02ca, 0x0350, 0x02ca, 0x0350, 0x02ca, 0x0370, 
	0x02ca, 0x039a, 0x02ca, 0x02b5, 0x02ca, 0x02d4, 0x02ca, 0x03d0, 
	/* casemap */
	0xf440, 0xf440, 0xf440, 0x0000, 0x0000, 0xf440, 0xf440, 0xf440, 
	0xf440, 0xf440, 0xf440, 0xf440, 0xf440, 0xfff8, 0xfff8, 0xff9c, 
	0xff9c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0002, 0x0000, 0x0000, 
	0x0002, 0x0000, 0x0000, 0x0001, 0x0000, 0xff9f, 0xffc8, 0x0020, 
	0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0074, 0xfff8, 0xfff8, 0xff90, 0xff90, 
	0xfff9, 0x0000, 0x0000, 0x0000, 0x0002, 0x0000, 0x0000, 0x0001, 
	0x0000, 0x0001, 0x0000, 0xd5e4, 0xd603, 0xd5e1, 0xff87, 0x0001, 
	0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0000, 0x0030, 0x0030, 
	0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 
	0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x75fc, 0x0001, 0x0000, 
	0xd609, 0xf11a, 0xd619, 0x0000, 0x0000, 0x0001, 0x0000, 0x0001, 
	0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 
	0x0000, 0x00d3, 0x00d5, 0x0000, 0x00d6, 0x000f, 0x0001, 0x0000, 
	0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x1c60, 0x0000, 0x0000, 0x2a2b, 
	0x0001, 0x0000, 0xff5d, 0x2a28, 0x0000, 0x00d9, 0x00d9, 0x0001, 
	0x0000, 0x0001, 0x0000, 0x00db, 0x0020, 0x0020, 0x0000, 0x0020, 
	0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 
	0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0026, 
	0x0000, 0x00d2, 0x0001, 0x0000, 0x0001, 0x0000, 0x00ce, 0x0001, 
	0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 
	0x0000, 0x0000, 0x001c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 
	0x0000, 0x0000, 0xfff8, 0x0000, 0xfff8, 0x0000, 0xfff8, 0x0000, 
	0xfff8, 0xfff8, 0xffb6, 0xffb6, 0xfff7, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0xd5c1, 0xd5c1, 0xd5e2, 0x0000, 0x0001, 
	0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 
	0x001a, 0x001a, 0xffaa, 0xffaa, 0xffaa, 0xffaa, 0xfff7, 0x0000, 
	0x0000, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0000, 0x0001, 
	0x0000, 0xffd0, 0x5abd, 0x75c8, 0x0001, 0x0000, 0x5abc, 0x5ab1, 
	0x5ab5, 0x5abf, 0x5abc, 0x0000, 0xfff9, 0x0001, 0x0000, 0x0000, 
	0xff7e, 0xff7e, 0xff7e, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 
	0x0001, 0x0000, 0x0001, 0x0000, 0x00da, 0x0001, 0x1c60, 0x1c60, 
	0x1c60, 0x1c60, 0x1c60, 0x1c60, 0x1c60, 0x1c60, 0x0000, 0x1c60, 
	0xff80, 0xff80, 0xff82, 0xff82, 0xfff7, 0x0000, 0x0000, 0x0000, 
	0x0001, 0x0000, 0x5ad8, 0x0000, 0x0000, 0x00cd, 0x00cd, 0x0001, 
	0x0000, 0x0000, 0x004f, 0x00ca, 0x97d0, 0x97d0, 0x97d0, 0x97d0, 
	0x97d0, 0x97d0, 0x97d0, 0x97d0, 0x0050, 0x0050, 0x0050, 0x0050, 
	0x0050, 0x0050, 0x0050, 0x0050, 0x0025, 0x0025, 0x0025, 0x0000, 
	0x0040, 0x0000, 0x003f, 0x003f, 0x5aee, 0x5ad6, 0x5aeb, 0x03a0, 
	0x0001, 0x0000, 0x0001, 0x0000, 0xff3d, 0x0045, 0x0047, 0x0001, 
	0x0000, 0x00da, 0x0000, 0x0000, 0x0001, 0x0000, 0x00da, 0x0001, 
	0x00cb, 0x0001, 0x0000, 0x00cd, 0x00cf, 0x0000, 0x00d3, 0x00d1, 
	0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 
};