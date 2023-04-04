#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list
 * @h: pointer to the head of list
 * Return: Number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_counts = 0;

	while (h != NULL)
	{
		nodes_counts++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_counts);
}
