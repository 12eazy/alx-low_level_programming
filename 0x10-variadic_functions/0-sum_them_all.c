#include "variadic_functions.h"

/**
 * sum_them_all - sumll all parameters
 * @n: number of argument
 * Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int k;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (k = 1; k <= n; k++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
