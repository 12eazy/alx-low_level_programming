#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to find factorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));

}
