#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed ny a new line
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	char ch;

	for (ch = 'Z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}	
