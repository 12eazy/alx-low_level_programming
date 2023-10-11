#include "main.h"

/**
 * print_last_ digit - print last digit
 * @k: function parameter
 * Return: b
 */

int print_last_digit(int k)
{
	int b;

	b = k % 10;
	if (k < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
