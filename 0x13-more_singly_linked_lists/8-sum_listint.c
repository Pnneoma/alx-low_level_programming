#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all the data or 0 if the list is empty
 **/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *data;

for (data = head; data != NULL; data = data->next)
{
sum += data->n;
}

return (sum);
}
