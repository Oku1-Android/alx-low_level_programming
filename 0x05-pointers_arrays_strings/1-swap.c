#include "main.h"

/**
 * swap_int - swaping values of pointers
 * @a: vlauess to be swaped
 * @b: vlalues to be swaped
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*b = n;
	*a = *b;
}
