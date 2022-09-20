#include "main.h"

#include "2-strlen.c"
/**
 * puts_half -we are  puttting half of int
 * @str: string to split
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
