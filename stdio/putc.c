/* putc function */
#include "../_headers/xstdio.h"

int putc(int c, FILE *str)
	{	/* put character to stream */
	return (fputc(c, str));
	}
