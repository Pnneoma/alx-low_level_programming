#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 * Return: pointer to the nth node or NULL if it doesn't exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;

while (head != NULL)
{
if (x == index)
{
return (head);
}
x++;
head = head->next;
}
return (NULL);
}
