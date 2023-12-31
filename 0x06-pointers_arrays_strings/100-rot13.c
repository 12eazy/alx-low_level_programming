#include "main.h"
/**
 * rot13 - This Funection encodes a string using rot13
 * @s:The string to encode.
 * Return: dest.
 */

char *rot13(char *s)
{
	int count = 0, k;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (k = 0; k < 52; k++)
		{
			if (*(s + count) == alphabet[k])
			{
				*(s + count) = rot13[k];
				break;
			}
		}
		count++;
	}

	return (s);
}
