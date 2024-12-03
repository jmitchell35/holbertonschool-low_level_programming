#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to dlistint_t struct first node
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;

	while (cursor)
	{
		head = cursor->next;
		free(cursor);
		cursor = head;
	}
}
