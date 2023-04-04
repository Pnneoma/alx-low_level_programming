#include <stdio.h>
#include "lists.h"

/**
 * listint_len - It returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t lens = 0;

while (h)
	{
	    lens++;
	    h = h->next;
	}
	return (lens);
}
