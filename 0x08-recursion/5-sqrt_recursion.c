#include "main.h"

/**
 * _sqrt_recursion - this function returns the natural square root of a number
 * @n: int number
 * Return: return -1 if value is less than zero
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - this is a helper function to solve _sqrt_recursion
 * @sq: integer whose square root is to be found
 * @n:  int number
 * Return: -1 if it has a non natural number
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
