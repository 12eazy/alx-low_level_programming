#include "main.h"

/**
 * _strien_recursion - returns the length of the string
 * @s: length to find its length
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));

	}
	return (0);
}
