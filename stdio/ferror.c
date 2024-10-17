/* ferror function */
#include "../_headers/xstdio.h"

int ferror(FILE *str)
	{	/* test error indicator for a stream */
	return (str->_Mode & _MERR);
	}
