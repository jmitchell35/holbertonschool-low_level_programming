#include "lists.h"
/**
  * print_dlistint - prints elements of a doubly linked list
  * @h: const ptr to first element of doubly linked list
  * Return: size_t, long uns int, number of elements
  */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t nb_elements = 0;

	while (ptr)
	{
		nb_elements++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nb_elements);
}
