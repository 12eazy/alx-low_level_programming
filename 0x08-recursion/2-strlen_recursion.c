#include "main.h"

/**
 * _strien_recursion - find the length of a string
 * @s: string to find its length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*S != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
