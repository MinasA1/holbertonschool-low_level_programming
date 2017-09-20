#include "sort.h"
/**
* insertion_sort_list - sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	int a;

	temp = *list;
	while (temp)
	{
		while (temp)
		{
			if (temp->next)
			{
				if (temp->n > temp->next->n)
				{
					a = temp->n;
					*(int *)&temp->n = temp->next->n;
					*(int *)&temp->next->n = a;
					temp = *list;
					print_list(*list);
					break;
				}
			}
			temp = temp->next;
		}
	}
}
