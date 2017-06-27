#include"lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head
 * head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	temp->next = (*head)->next;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
