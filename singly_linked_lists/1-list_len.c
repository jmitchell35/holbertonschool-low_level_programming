#include "lists.h"
/**
  * list_len - returns length of linked list
  * @h: const ptr to linked list
  * Return: size_t, long uns int, number of elements of list
  */
size_t list_len(const list_t *h)
{
	list_t *ptr = (list_t *)h;
	size_t nb_elements = 0;

	while (ptr)
	{
		nb_elements++;
		ptr = ptr->next;
	}
	return (nb_elements);
}
