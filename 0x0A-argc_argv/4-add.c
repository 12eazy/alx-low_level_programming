#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print program that adds positive number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, b;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (k = 1 ; k < argc ; k++)
		{
			for (b = 0 ; argv[k][b] != '\0' ; b++)
			{
				if (!(isdigit(argv[k][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[k]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
