#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int k;
	int b;

	for (k = 0 ; k < 10 ; k++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
