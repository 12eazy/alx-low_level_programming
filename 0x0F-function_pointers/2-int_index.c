#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointers
 * Return: matched charactervor -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
