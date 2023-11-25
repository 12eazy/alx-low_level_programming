#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if successful or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	/*
	 *Shift 1 to the left by index to create a mask
	 *a mask with all bits set except for the bit at the given index
	 *perform a bitwise AND operation with the original value to clear
	 *the bit at the given index
	 */
	*n &= ~(1 << index);

	return (1);
}
