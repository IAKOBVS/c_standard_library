/* feof function */
#include "../_headers/xstdio.h"

int feof(FILE *str)
	{	/* test end-of-file indicator for a stream */
	return (str->_Mode & _MEOF);
	}
