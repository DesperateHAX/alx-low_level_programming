#include <string.h>
#include "main.h"
/**
 * main - Entry poin
 * Description: We are trying to print putchar
 * Return: Always 0 (Success)
 */
int main(void)

{

		char output[] = "_putchar";

		int i = 0;


		for (i < 8; ++i)

			_putchar(output[i]);

		_putchar('\n');
		return (0);

}
