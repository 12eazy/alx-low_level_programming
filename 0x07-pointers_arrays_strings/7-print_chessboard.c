#include "main.h"
/**
*print_chessboard - This function prints the chessboard
*@a: pointer input
*Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int b, k;

	for (b = 0; b < 8; b++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[b][k]);
		}
		_putchar('\n');
	}
}
