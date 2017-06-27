#include"lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node of list
 * Return: sum of all data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = h->n;

	if (head == NULL)
		return (0);
	while (head)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
