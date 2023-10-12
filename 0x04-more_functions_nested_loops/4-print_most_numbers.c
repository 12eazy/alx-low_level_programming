#include "main.h"

/**
 * print_most_numbers - print the number from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)

{
	int k;

	for (k = 0; k <= 9; k++)
	{
		if (k != 2 && k != 4)
			_putchar('0' + k);
	}
	_putchar('\n');
}
