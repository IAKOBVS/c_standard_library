/* putchar function */
#include "../_headers/xstdio.h"

int putchar(int c)
	{	/* put character to stdout */
	return (fputc(c, stdout));
	}
