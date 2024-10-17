/* puts function */
#include "../_headers/xstdio.h"

int puts(const char *s)
	{	/*	put string + newline to stdout */
	return (fputs(s, stdout) < 0
		|| fputc('\n', stdout) < 0 ? EOF : 0);
	}
