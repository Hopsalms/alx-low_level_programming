#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
