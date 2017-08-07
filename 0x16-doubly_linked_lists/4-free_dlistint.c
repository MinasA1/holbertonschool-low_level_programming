#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
  if (head == NULL)
    return;
  while (head->next)
    {
      head->n = 0;
      head = head->next;
      free(head->prev);
    }
  free(head);
}
