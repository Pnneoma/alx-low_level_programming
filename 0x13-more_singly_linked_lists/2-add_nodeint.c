#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning of a list
 * @head: Apointer to the address of head in the list
 * @n: Integer of the node contain
 * Return: If function fail- NULL
 * Otherwise - address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;

	*head = new_nodes;

	return (new_nodes);
}
