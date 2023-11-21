#include "lists.h"

/**
 * print_listint - This function print the element of listin_t
 * @h: pointer to new node
 * Return: pointer to node
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;

	}
	return (num);
}
