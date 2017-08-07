#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: double pointer to head
 * @n: data
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new, *current = *head;

  if (head == NULL)
    return (NULL);
  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);
  new->n = n;
  new->next = NULL;
  if (current == NULL)
    {
      *head = new;
      new->prev = NULL;
      return (new);
    }
  for (; current->next != NULL; current = current->next)
    ;
  new->prev = current;
  current->next = new;
  return (new);
}
