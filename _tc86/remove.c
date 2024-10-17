/* remove function -- Turbo C++ version */
#include "../_headers/xstdio.h"

		/* Turbo C++ system call */
int unlink(const char *);

int remove(const char *fname)
	{	/* remove a file */
	return (unlink(fname));
	}
