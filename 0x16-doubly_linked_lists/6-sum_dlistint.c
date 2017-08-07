#include "lists.h"
/**
 * sum_dlistint - gets sum of n in linked list
 * @head: pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
