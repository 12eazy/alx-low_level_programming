#include "main.h"

/**
 * puts_half - function print half of a string
 * @str: print half  strings
 * Return: void
 */

void puts_half(char *str)
{
	int k, b, count = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;
	b = (count - 1) / 2;
	for (k = b + 1 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
