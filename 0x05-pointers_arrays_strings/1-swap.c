#include "main.h"

/**
 *function that swaps the values of two integers
 *void swap_int
 *@a: this is the first entry
 *@b: this is the second entry
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

