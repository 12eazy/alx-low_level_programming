#include "main.h"

/**
 * print_square - prints square using the '#' character
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar ('\n');
	else
	{
		int k, b;

		for (k = 1 ; k <= size ; k++)
		{
			for (b = 1 ; b <= size ; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
