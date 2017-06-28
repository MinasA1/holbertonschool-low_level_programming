#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head
 * @index: index of node
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
