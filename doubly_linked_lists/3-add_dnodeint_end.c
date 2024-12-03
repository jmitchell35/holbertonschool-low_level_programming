#include "lists.h"
/**
  * add_dnodeint_end - adds node to end of doubly linked list
  * @head: pointer to pointer to list_t struct (first node of db lk list)
  * @n: constant int, data for new node
  * Return: the address of the new element, NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cursor = *head;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (cursor->next)
		cursor = cursor->next;
	cursor->next = new;
	new->prev = cursor;
	new->n = n;
	new->next = NULL;
	return (new);
}
