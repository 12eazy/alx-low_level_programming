#include "main.h"

/**
 * create_array - create an array of char and initialize it
 * @size: size of an array
 * @c: character to store an array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		arr[k] = c;
	return (arr);
}
