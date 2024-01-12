#include "main.h"
#include <stdio.h>
/**
 * time_tables - print times tables 9 starting from 0
 * Return: 0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d, ", result);
			else
			{
				printf("%d, ", result);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n";
	}
}
