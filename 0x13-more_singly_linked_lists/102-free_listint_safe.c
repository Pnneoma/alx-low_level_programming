#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Double pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current = *h, *next;

    while (current != NULL)
    {
        count++;
        next = current->next;
        free(current);
        if (current <= next)
        {
            *h = NULL;
            break;
        }
        current = next;
    }

    *h = NULL;
    return (count);
}
