#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, b;

	for (k = 0 ; s[k] != '\0' ; k++)

		for (b = 0 ; s[k] != accept[b] ; b++)
		{
			if (accept[b] == '\0')
				return (k);
		}
	}
	return(0);
}
