/* _Costate, _Mbstate, and _Wcstate generic tables */
#include "../_headers/xlocale.h"
#if UCHAR_MAX != 255
#error WRONG STATE TABLE
#endif

		/* macros */
#define X	(ST_FOLD|ST_OUTPUT|ST_INPUT)

		/* static data */
static const unsigned short tab0[257] = {0,	/* alloc flag */
X|0x00, X|0x01, X|0x02, X|0x03, X|0x04, X|0x05, X|0x06, X|0x07,
X|0x08, X|0x09, X|0x0a, X|0x0b, X|0x0c, X|0x0d, X|0x0e, X|0x0f,
X|0x10, X|0x11, X|0x12, X|0x13, X|0x14, X|0x15, X|0x16, X|0x17,
X|0x18, X|0x19, X|0x1a, X|0x1b, X|0x1c, X|0x1d, X|0x1e, X|0x1f,
X|0x20, X|0x21, X|0x22, X|0x23, X|0x24, X|0x25, X|0x26, X|0x27,
X|0x28, X|0x29, X|0x2a, X|0x2b, X|0x2c, X|0x2d, X|0x2e, X|0x2f,
X|0x30, X|0x31, X|0x32, X|0x33, X|0x34, X|0x35, X|0x36, X|0x37,
X|0x38, X|0x39, X|0x3a, X|0x3b, X|0x3c, X|0x3d, X|0x3e, X|0x3f,
X|0x40, X|0x41, X|0x42, X|0x43, X|0x44, X|0x45, X|0x46, X|0x47,
X|0x48, X|0x49, X|0x4a, X|0x4b, X|0x4c, X|0x4d, X|0x4e, X|0x4f,
X|0x50, X|0x51, X|0x52, X|0x53, X|0x54, X|0x55, X|0x56, X|0x57,
X|0x58, X|0x59, X|0x5a, X|0x5b, X|0x5c, X|0x5d, X|0x5e, X|0x5f,
X|0x60, X|0x61, X|0x62, X|0x63, X|0x64, X|0x65, X|0x66, X|0x67,
X|0x68, X|0x69, X|0x6a, X|0x6b, X|0x6c, X|0x6d, X|0x6e, X|0x6f,
X|0x70, X|0x71, X|0x72, X|0x73, X|0x74, X|0x75, X|0x76, X|0x77,
X|0x78, X|0x79, X|0x7a, X|0x7b, X|0x7c, X|0x7d, X|0x7e, X|0x7f,

X|0x80, X|0x81, X|0x82, X|0x83, X|0x84, X|0x85, X|0x86, X|0x87,
X|0x88, X|0x89, X|0x8a, X|0x8b, X|0x8c, X|0x8d, X|0x8e, X|0x8f,
X|0x90, X|0x91, X|0x92, X|0x93, X|0x94, X|0x95, X|0x96, X|0x97,
X|0x98, X|0x99, X|0x9a, X|0x9b, X|0x9c, X|0x9d, X|0x9e, X|0x9f,
X|0xa0, X|0xa1, X|0xa2, X|0xa3, X|0xa4, X|0xa5, X|0xa6, X|0xa7,
X|0xa8, X|0xa9, X|0xaa, X|0xab, X|0xac, X|0xad, X|0xae, X|0xaf,
X|0xb0, X|0xb1, X|0xb2, X|0xb3, X|0xb4, X|0xb5, X|0xb6, X|0xb7,
X|0xb8, X|0xb9, X|0xba, X|0xbb, X|0xbc, X|0xbd, X|0xbe, X|0xbf,
X|0xc0, X|0xc1, X|0xc2, X|0xc3, X|0xc4, X|0xc5, X|0xc6, X|0xc7,
X|0xc8, X|0xc9, X|0xca, X|0xcb, X|0xcc, X|0xcd, X|0xce, X|0xcf,
X|0xd0, X|0xd1, X|0xd2, X|0xd3, X|0xd4, X|0xd5, X|0xd6, X|0xd7,
X|0xd8, X|0xd9, X|0xda, X|0xdb, X|0xdc, X|0xdd, X|0xde, X|0xdf,
X|0xe0, X|0xe1, X|0xe2, X|0xe3, X|0xe4, X|0xe5, X|0xe6, X|0xe7,
X|0xe8, X|0xe9, X|0xea, X|0xeb, X|0xec, X|0xed, X|0xee, X|0xef,
X|0xf0, X|0xf1, X|0xf2, X|0xf3, X|0xf4, X|0xf5, X|0xf6, X|0xf7,
X|0xf8, X|0xf9, X|0xfa, X|0xfb, X|0xfc, X|0xfd, X|0xfe, X|0xff,
	};

char _Mbcurmax = 1;

_Statab _Costate = {{&tab0[1]}};
_Statab _Mbstate = {{&tab0[1]}};
_Statab _Wcstate = {{&tab0[1]}};
