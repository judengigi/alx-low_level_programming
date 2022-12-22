#include "main.h"

/**
*reverse_array - function that reverses
*@a: array
*@n: element of an array
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = o; k <= n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
}
