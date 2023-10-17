#include "main.h"

/**
 * print_array - print n element of an array of integers
 * @a: arrays to be uses
 * @n: number to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0 ; k < n ; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	printf("\n");
}
