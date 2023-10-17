#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: print strings
 * Return: void
 */

void puts2(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
