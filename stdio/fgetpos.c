/* fgetpos function */
#include "../_headers/xstdio.h"

int fgetpos(FILE *str, fpos_t *p)
	{	/* get file position indicator for stream */
	return (_Fgpos(str, p));
	}
