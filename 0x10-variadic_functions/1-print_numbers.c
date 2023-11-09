#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print number
 * @separator: string to be printed between numbers
 * @n: number of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list bee;

	va_start(bee, n);
	for (k = 1; k <= n; k++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(bee, int));
			if (k != n - 0)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(bee, int));
	}
	printf("\n");
	va_end(bee);
}
