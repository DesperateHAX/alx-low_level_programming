#include "main.h"
/**
 * print_rev - reverse a string
 *
 *
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');

}
