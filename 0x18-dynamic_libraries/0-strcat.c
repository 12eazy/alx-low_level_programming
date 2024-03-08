#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int k;

	for (k = 0 ; dest[k] != '\0' ; k++)
		destlen++;
	for (k = 0 ; src[k] != '\0' ; k++)
		srclen++;

	for (k = 0 ; k <= srclen ; k++)
		dest[destlen + k] = src[k];
	return (dest);
}
