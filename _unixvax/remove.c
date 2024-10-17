/* remove function -- UNIX version */
#include "../_headers/xstdio.h"

		/* UNIX system call */
int _Unlink(const char *);

int remove(const char *fname)
	{	/* remove a file */
	return (_Unlink(fname));
	}
