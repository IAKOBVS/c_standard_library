/* ftell function */
#include "../_headers/xstdio.h"

long ftell(FILE *str)
	{	/* get seek offset for stream */
	return (_Fgpos(str, NULL));
	}
