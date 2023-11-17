#include "lists.h"

/**
 * list_len - return the number of element in a linked list_t list
 * @h: head node
 * Return: length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
