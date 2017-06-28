#include"lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp->next = (*head)->next;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
