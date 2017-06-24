#include "lists.h"

/**
 * add_node - return number of elements in a list
 * @h: pointer to list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new;

	new = malloc (sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->str[i]; i++)
		;
	new->len = i;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
