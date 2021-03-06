#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of the list
 * @head: double pointer to head
 * @n: data being added to the new node
 * Return: new node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head ? (*head)->prev = new : NULL;
	*head = new;
	return (new);
}
