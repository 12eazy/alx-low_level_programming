#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int k;
	int b;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	for (k = 0 ; k < count / 2 ; k++)
	{
		b = s[k];
		s[k] = s[count - 1 - k];
		s[count - 1 - k] = b;

	}
}
