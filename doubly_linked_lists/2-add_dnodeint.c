#include "lists.h"
/**
  * add_dnodeint - adds node to beginning of doubly linked list
  * @head: pointer to pointer to list_t struct (first node of dbl lk list)
  * @n: constant int, data for new node
  * Return: the address of the new element, NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cursor = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (cursor != NULL)
		cursor->prev = new;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
