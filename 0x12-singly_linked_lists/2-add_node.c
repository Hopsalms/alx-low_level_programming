#include "lists.h"
/**
 * add_node - adds node at the beginning
 * @head: head of the node.
 * @str: string to store
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
