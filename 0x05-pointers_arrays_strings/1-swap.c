#include "main.h"

/**
 * swap_int -swap the values of two integers
 * @a: point 1
 * @b: point 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
