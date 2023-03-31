#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning
 * @head: a pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: If the function fails - NULL
 * or address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	p = strdup(str);
	if (p == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = p;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
