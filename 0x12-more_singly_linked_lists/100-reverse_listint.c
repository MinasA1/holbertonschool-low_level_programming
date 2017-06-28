#include "lists.h"

/*
 * reverse_listint - reverse a listint_t list
 * @head: pointer to first node
 * Return: first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	if (temp->next == NULL)
		return (*head);
	*head = (*head)->next;
	temp2 = (*head)->next;
	(*head)->next = temp;
	temp->next = NULL;
	while (temp2)
	{
		temp = *head;
		*head = temp2;
		temp2 = (*head)->next;
		(*head)->next = temp;
	}
	return (*head);
}
