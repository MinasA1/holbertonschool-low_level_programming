#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in doubly linked list
 * index `index'.
 * @head: double pointer to list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = cur->prev;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
