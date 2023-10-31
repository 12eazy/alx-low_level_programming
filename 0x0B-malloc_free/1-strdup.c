#include "main.h"

/**
 * _strdup - return a newly allocated space in memory
 * @str: string to copy new memory
 * Return: pointer to the memory
 */

char *_strdup(char *str)
{
	int k;
	char *take;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		count++;

	take = malloc(sizeof(char) * count + 1);

	if (take == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		take[k] = str[k];

	return (take);


}
