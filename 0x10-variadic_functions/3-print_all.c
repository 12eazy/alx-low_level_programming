#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments passed
 * @format: format of argument to be printed
 * Return: it returns nothing
 */
void print_all(const char * const format, ...)
{
	va_list bee;
	unsigned int k = 0;
	char *c, *com = "";

	va_start(bee, format);
	if (format != NULL)
	{
	while (format[k] != '\0')
		{
		switch (format[k])
			{
			case 'c':
				printf("%s%c", com, va_arg(bee, int));
				break;
			case 'i':
				printf("%s%d", com, va_arg(bee, int));
				break;
			case 'f':
				printf("%s%f", com, va_arg(bee, double));
				break;
			case 's':
				c = va_arg(bee, char *);
				if (c == NULL)
				c = "(nil)";
				printf("%s%s", com, c);
				break;
			default:
				k++;
				continue;
	}
	com = ", ";
	k++;
	}
	}
	printf("\n");
	va_end(bee);
	}
