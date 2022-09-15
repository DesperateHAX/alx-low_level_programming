#include "holberton.h"

/**
 * _isupper - checks if uppercase
 *
 * @c: character to check
 *
 *
 * Return: gives 1 or 0
 *
 */

int _isupper(int c)
{
	if (c>= 64 && c<= 90)
		return(1);
	else (c>= 97 && c<= 122)
		return(0);
}
