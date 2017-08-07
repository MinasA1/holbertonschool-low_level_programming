#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node in double linked list at
 * index `index'.
 * @h: double pointer to list
 * @idx: index to insert new node
 * @n: value to add to new node
 * Return: pointer to new node, or NULL 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current->next;
			new->prev = current;
			if (current->next != NULL)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
