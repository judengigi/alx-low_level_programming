#include "main.h"

/**
 * puts_half - prints half half of a string
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[1] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
