#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: pointer to first node of the list
 * @str: string to be added in the node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new , *temp = *head;

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
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
