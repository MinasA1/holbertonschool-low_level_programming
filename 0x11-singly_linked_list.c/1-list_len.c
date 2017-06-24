#include "lists.h"

/**
 * list_len - return number of elements in a list
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
