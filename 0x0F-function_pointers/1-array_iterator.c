#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iteration - execute a function on each element of nan array
 * @array: the array
 * @size: size of the arrzy
 * @action: function to perform on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
		action(array[k]);
}
