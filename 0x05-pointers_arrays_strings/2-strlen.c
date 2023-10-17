#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: strings to be counted
 * Return: the string length
 */

int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		count++;
	return (count);
}
