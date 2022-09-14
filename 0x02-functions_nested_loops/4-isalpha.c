#include <ctype.h>
#include "main.h"
/**
 * print_sign - main function
 * @n: character to compare
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

