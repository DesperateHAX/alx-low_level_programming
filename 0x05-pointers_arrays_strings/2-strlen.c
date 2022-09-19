#include "main.h"
/**
 * _strlen - Calculating the lenghth of a string
 * @s: A pointer that evaluates a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
