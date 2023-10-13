#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times the character ' _ ' will be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k;

	for (k = 0; k < n; k++)

		_putchar('_');
	_putchar('\n');
	}

}
