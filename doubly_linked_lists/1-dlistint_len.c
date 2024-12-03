#include "lists.h"
/**
  * dlistint_len - Returns number of elements in doubly linked list
  * @h: const ptr to first element of doubly linked list
  * Return: size_t, long uns int, number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t nb_elements = 0;

	while (ptr)
	{
		nb_elements++;
		ptr = ptr->next;
	}
	return (nb_elements);
}
