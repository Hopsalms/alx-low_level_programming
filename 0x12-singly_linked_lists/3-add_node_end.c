#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: head of the node.
 * @str: string
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *currentnode;
	size_t i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newnode->len = i;
	newnode->next = NULL;
	currentnode = *head;

	if (currentnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (currentnode->next != NULL)
			currentnode = currentnode->next;
		currentnode->next = newnode;
	}

	return (*head);
}
