#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return:void
 */

void print_rev(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	for (k = count - 1 ; k >= 0 ; k--)
		_putchar(s[k]);
	_putchar('\n');
}
