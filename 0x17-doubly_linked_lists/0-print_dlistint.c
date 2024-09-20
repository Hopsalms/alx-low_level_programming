#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all element of dlistint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
