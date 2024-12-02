#include "lists.h"
/**
  * print_list - prints elements of a linked list
  * @h: const ptr to linked list
  * Return: size_t, long uns int, number of elements
  */
size_t print_list(const list_t *h)
{
	list_t *ptr = (list_t *)h;
	size_t nb_elements = 0;

	while (ptr)
	{
		nb_elements++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (nb_elements);
}
