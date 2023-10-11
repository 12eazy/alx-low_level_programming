#include "main.h"

/**
 * main - print alphabet ten times
 * Return: always 0
 */

void print_alphabet_x10(void);
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			putchar(j);
	}
	putchar('\n');

	return (0);


}
