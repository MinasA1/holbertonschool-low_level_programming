#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to first node of list
 * @index: index of the node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *temp2 = *head;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp2 = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	free(temp2->next);
	temp2->next = temp->next;
	return (1);
}
