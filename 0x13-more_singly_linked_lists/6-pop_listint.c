#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: Pointer to the address of the head of list
 * Return: If the linked list is empty  - 0.
 * Otherwise - The head node
 */
int pop_listint(listint_t **head)
{
	listint_t *fre;
	int r;

	if (*head == NULL)
		return (0);

	fre = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(fre);
	return (r);
}
