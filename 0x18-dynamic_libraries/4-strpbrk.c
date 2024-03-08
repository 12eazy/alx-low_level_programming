#include "main.h"
/**
*_strpbrk - This function searches a string for any set of bytes
*@s: The string
*@accept: The bytes the function searches for
*Return: A pointer to the byte matched
*/
char *_strpbrk(char *s, char *accept)
{
	int k, b;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[k] == accept[b])
			{
				return (s + k);
			}
		}
	}
	return ('\0');
}
