#include "lists.h"
/**
  * dlistint_len - Returns number of elements in doubly linked list
  * @h: const ptr to linked list
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
/**
  * delete_dnodeint_at_index - deletes node at index
  * @head: double-pointer to the first node of the list
  * @index: unsigned int, index where node should be deleted
  * Return: 1 (success), -1 (fail)
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *Delcursor = *head;
	unsigned int list_iter = 0;

	if (head == NULL || *head == NULL) /*Null or empty*/
		return (-1);
	while (list_iter < index && Delcursor)
	{
		Delcursor = Delcursor->next;
		list_iter++;
	}
	if (Delcursor == NULL) /*off range*/
		return (-1);
	if (Delcursor->prev)
		Delcursor->prev->next = Delcursor->next;
	else
		*head = Delcursor->next;
	if (Delcursor->next)
		Delcursor->next->prev = Delcursor->prev;
	free(Delcursor);
	return (1);
}
