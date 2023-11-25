#include "main.h"

/**
 * set_bit - set the value of a bit to 1 ata given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: if not successful return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is greater than the number*/
	  /*of bits in an unsigned long int variable*/
	if (index > 64)
	{
		/*Return -1 if the index is out of range*/
		return (-1);
	}
	*n |= (1 << index);

	/*Return 1 to show success*/
	return (1);
}
