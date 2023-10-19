#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destinaton strings
 * @src: source strings
 * @n: number of bytes to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int k;

	for (k = 0 ; k < n && *src != '\0' ; k++)
	{
		dest[len + k] = *src;
		src++;
	}
	dest[len + k] = '\0';
	return (dest);
}
