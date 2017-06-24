#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: pointer to list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		printf("[%u] %s\n",h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
