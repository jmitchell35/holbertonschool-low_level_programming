#include "lists.h"
/**
  * get_dnodeint_at_index - gets node from doubly linked list at index
  * @head: pointer to pointer to list_t struct (first node)
  * @index: unsigned int, index of node requested
  * Return: the address of the node, NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = head;
	unsigned int list_iter;

	if (cursor == NULL)
		return (NULL);
	list_iter = 0;
	while (list_iter < index)
	{
		cursor = cursor->next;
		list_iter++;
	}
	return (cursor && list_iter == index ? cursor : NULL);
}
