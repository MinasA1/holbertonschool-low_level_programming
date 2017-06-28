#include"lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node of list
 * @idx: index of the list where the new node should be added
 * @n: data in new node
 * Return: address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx == 0)
		new->next = NULL;
	else if(*head == NULL && idx)
		return (NULL);
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
