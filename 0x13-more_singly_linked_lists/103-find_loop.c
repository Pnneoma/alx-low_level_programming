#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slo = head, *speed = head;

    while (slo && speed && speed->next)
    {
        slo = slo->next;
        speed = speed->next->next;
        if (slo == speed)
        {
            slo = head;
            while (slo != speed)
            {
                slo = slo->next;
                speed = speed->next;
            }
            return (slo);
        }
    }
    return (NULL);
}
