#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0 ; k < n && src[k] != '\0' ; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
