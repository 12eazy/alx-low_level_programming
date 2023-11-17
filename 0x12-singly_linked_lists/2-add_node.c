#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string to store
 * Return: new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int k, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
