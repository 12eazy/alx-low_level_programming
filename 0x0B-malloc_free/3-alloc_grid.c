#include "main.h"

/**
 * alloc_grid - return a pointers to a 2 decimal array
 * @width: number of columns
 * @height: munber of rows
 * Return: pointers to array
 */

int **alloc_grid(int width, int height)
{
	int k, b;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		output[k] = malloc(sizeof(int) * width);

		if (output[k] == NULL)
		{
			free(output);
			for (b = 0; b <= height; b++)
				free(output[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			output[k][b] = 0;
	}
	return (output);
}
