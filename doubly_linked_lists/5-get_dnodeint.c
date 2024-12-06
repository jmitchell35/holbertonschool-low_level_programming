#include "lists.h"
/**
  * get_dnodeint_at_index - gets node from doubly linked list at index
  * @head: pointer to pointer to list_t struct (first node)
  * @index: unsigned int, index of node requested
  * Return: the address of the node, NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int list_iter;

	if (head == NULL)
		return (NULL);
	list_iter = 0;
	while (head && list_iter < index)
	{
		head = head->next;
		list_iter++;
	}
	return (head);
}
