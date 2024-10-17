/* fseek function */
#include "../_headers/xstdio.h"

int fseek(FILE *str, long off, int smode)
	{	/* set seek offset for stream */
	return (_Fspos(str, NULL, off, smode));
	}
