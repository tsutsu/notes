/*
inline wchar_t toupper_4638(wchar_t ch)
{
	extern const uint8_t  casemap_u_4638_idx[];
	extern const uint16_t casemap_u_4638_off[];
	extern const wchar_t  casemap_u_4638_dat[];
	return ch + casemap_u_4638_dat[ casemap_u_4638_off[ casemap_u_4638_idx[ch >> 5] ] + (ch & 0x1f) ];
}
*/

const uint8_t casemap_u_4638_idx[2048] = 
{
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 
	0x03, 0x0b, 0x0c, 0x0d, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x10, 0x11, 0x12, 
	0x00, 0x13, 0x14, 0x03, 0x15, 0x03, 0x16, 0x03, 0x03, 0x17, 0x00, 0x18, 0x19, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x1e, 0x00, 0x00, 0x00, 
	0x03, 0x03, 0x03, 0x03, 0x1f, 0x03, 0x03, 0x03, 0x20, 0x21, 0x22, 0x23, 0x21, 0x24, 0x25, 0x26, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x28, 0x29, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x2c, 0x2d, 0x2e, 0x03, 0x03, 0x03, 0x2f, 0x30, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x32, 0x33, 0x00, 0x00, 0x00, 0x00, 0x34, 0x03, 0x35, 0x36, 0x37, 0x38, 0x39, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x3b, 0x3c, 0x3c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint16_t casemap_u_4638_off[61] = 
{
	0x03a1, 0x0297, 0x0207, 0x0480, 0x01ae, 0x0476, 0x0467, 0x01e7, 
	0x01c7, 0x036f, 0x015a, 0x0170, 0x018f, 0x013b, 0x011b, 0x00fb, 
	0x0083, 0x03c9, 0x0353, 0x0288, 0x0094, 0x045d, 0x041a, 0x0490, 
	0x0313, 0x032d, 0x003f, 0x004f, 0x03a9, 0x0334, 0x02f4, 0x048a, 
	0x00c4, 0x00b4, 0x00d4, 0x0000, 0x006f, 0x02e2, 0x02d2, 0x00ec, 
	0x02b2, 0x039c, 0x0251, 0x0267, 0x0304, 0x0315, 0x0448, 0x038d, 
	0x0227, 0x0241, 0x0492, 0x0484, 0x0409, 0x042a, 0x03e1, 0x03f7, 
	0x001e, 0x0271, 0x002b, 0x04a2, 0x04b2, 
};

const wchar_t casemap_u_4638_dat[1234] = 
{
	0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x004a, 0x004a, 0x0056, 0x0056, 0x0056, 0x0056, 0x0064, 0x0064, 
	0x0080, 0x0080, 0x0070, 0x0070, 0x007e, 0x007e, 0x0000, 0x0000, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc60, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0bc0, 
	0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 
	0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 
	0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 0x0bc0, 
	0x0bc0, 0x0bc0, 0x0000, 0x0000, 0x0bc0, 0x0bc0, 0x0bc0, 0x0008, 
	0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0008, 
	0x0008, 0x0000, 0x0009, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffda, 
	0xffdb, 0xffdb, 0xffdb, 0x0000, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 
	0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 
	0xffb0, 0xffb0, 0xffb0, 0xffb0, 0x0008, 0x0008, 0x0008, 0x0008, 
	0x0008, 0x0008, 0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0008, 0x0008, 0x0008, 0x0008, 
	0x0008, 0x0008, 0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0008, 0x0008, 0x0008, 0x0008, 
	0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0008, 0x0000, 0x0008, 
	0x0000, 0x0008, 0x0000, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0xffe4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0082, 0x0082, 
	0x0082, 0x0000, 0x0000, 0xff26, 0x0000, 0xa543, 0xff26, 0x0000, 
	0x0000, 0x0000, 0xa52a, 0xff26, 0xffbb, 0xff27, 0xff27, 0xffb9, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff25, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xa515, 0xa512, 0x0000, 0xff33, 0xa54b, 0x0000, 0xff31, 0x0000, 
	0xa528, 0xa544, 0x0000, 0xff2f, 0xff2d, 0xa544, 0x29f7, 0xa541, 
	0x0000, 0x0000, 0xff2d, 0x0000, 0x29fd, 0xff2b, 0x0000, 0x0000, 
	0xff2a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x29e7, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0xfffe, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x2a3f, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x2a1f, 
	0x2a1c, 0x2a1e, 0xff2e, 0xff32, 0x0000, 0xff33, 0xff33, 0x0000, 
	0xff36, 0x0000, 0xff35, 0xa54f, 0x0000, 0x0000, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0038, 0x00c3, 
	0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0061, 0x0000, 0x0000, 0x0000, 
	0xffff, 0x00a3, 0x0000, 0x0000, 0x0000, 0x0082, 0x0000, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0x0000, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0x0079, 0xe3a0, 
	0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 
	0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 
	0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 
	0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0xe3a0, 0x0000, 
	0xe3a0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe3a0, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 
	0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 0xffe6, 
	0xffe6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 
	0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 0xfff0, 
	0xfff0, 0xfff0, 0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0007, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0009, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0008, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x8a38, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 
	0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 
	0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 
	0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 0xffd0, 
	0xffd0, 0xffd0, 0xffd0, 0xffd0, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8a04, 0x0000, 0x0000, 
	0x0000, 0x0ee6, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0007, 0xff8c, 0x0000, 
	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0x0000, 0x0000, 
	0xfffe, 0x0000, 0x0000, 0xfffe, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0xffb1, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0x0000, 
	0x0000, 0xffe0, 0xffe0, 0x0000, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 
	0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffc0, 0xffc1, 0xffc1, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xfff8, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
	0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0030, 0x0000, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0xfff1, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0xd5d5, 0xd5d8, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 
	0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 
	0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 
	0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 0x6830, 
	0x6830, 0x6830, 
};