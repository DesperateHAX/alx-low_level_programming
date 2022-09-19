#include "main.h"
/**
 * swap_int- swaps two intergers a and b
 * @a: Pointer that has an interger value
 * @b: Pointer that has an interger value
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = b;
	*b = c;
}


