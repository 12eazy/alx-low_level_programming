#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print information about a dog
 * @d: The dog struct
 *
 * Return: None(only print out date when called)
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name:%s\n", (d->name) ? d->name : "(nil)");
		printf("age:%f\n", (d->age) ? d->age : 0);
		printf("owner:%s\n", (d->owner) ? d->owner : "(nil)");
	}
}
