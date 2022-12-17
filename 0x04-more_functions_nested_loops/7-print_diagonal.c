#include "main.h"

/**
 *print_diagonal - print diagonal line on terminal
 *@n: times diagonal line is printed
 *Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('\n');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchair('\n');
	}
	_putchar('\n');
}

