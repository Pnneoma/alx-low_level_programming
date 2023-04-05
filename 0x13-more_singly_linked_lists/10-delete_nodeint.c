#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *past, *present;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		present = *head;
		*head = (*head)->next;
		free(present);
		return (1);
	}

	past = NULL;
	present = *head;
	for (i = 0; present && i < index; i++)
	{
		past = present;
		present = present->next;
	}

	if (!present)
		return (-1);

	past->next = present->next;
	free(present);

	return (1);
}
