#include "lists.h"

/**
 * add_node_end - Add a new node at the list_t of list
 * @head: head of the node
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	unsigned int k, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;

	}
	return (*head);
}
