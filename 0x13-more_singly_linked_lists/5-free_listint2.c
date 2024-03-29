#include "lists.h"

/**
 * free_listint2 - that frees a listint_t list.
 * @head: A pointer to the address of the head of the list.
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (head == NULL)
		return;
	while (*head)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}
	head = NULL;
}
