#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to head
 * @n: data to add
 * Return: address of new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
