#include <stdio.h>

#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int  n = 612852475143;
	unsigned int a = 2;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		} else
		{
			a++;
		}
	}

	printf("%lu\n", n);
	return (0);
}
