/* _Poly function */
#include "../_headers/xmath.h"

double _Poly(double x, const double *tab, int n)
	{	/* compute polynomial */
	double y;

	for (y = *tab; 0 <= --n; )
		y = y * x + *++tab;
	return (y);
	}
