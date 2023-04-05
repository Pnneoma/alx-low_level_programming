#include  "lists.h"

/**
 * add_nodeint_end - Add new node at the end of the list
 * @head: A pointer to the address of the head of list
 * @n: Integer for the new node
 * Return: Function fails - NULL
 * or the address of the new elements
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes, *last_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
		*head = new_nodes;

	else
	{
		last_nodes = *head;
		while (last_nodes->next != NULL)
			last_nodes = last_nodes->next;
		last_nodes->next = new_nodes;
	}
	return (*head);
}
