#include <stdio.h>

/**
 * main - print asll argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0 ; k < argc ; k++)
		printf("%s\n", argv[k]);
	return (0);
}
