#include "main.h"

/**
 * print_diagonal - print diagonal using the '\' character
 * @n: number of time '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k, b;

		for (k = 0 ; k < n ; k++)
		{
			for (b = 0 ; b <= k ; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
