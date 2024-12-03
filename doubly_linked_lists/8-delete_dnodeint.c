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
	dlistint_t *Rcursor = *head, *Lcursor = *head, *Delcursor = *head;
	unsigned int list_iter;

	if (head == NULL)
		return (-1);
	list_iter = 0;
	while (list_iter < index && Rcursor)
	{
		Rcursor = Rcursor->next;
		list_iter++;
	}
	if (list_iter <= index && Rcursor == NULL)
		return (-1);
	if (index == 0)
	{
		Rcursor = Rcursor->next;
		*head = Rcursor;
	}
	else if (index == dlistint_len(*head) - 1)
	{
		Lcursor = Rcursor->prev;
		Delcursor = Rcursor;
		Lcursor->next = NULL;
	}
	else
	{
		Delcursor = Rcursor;
		Rcursor = Delcursor->next;
		Lcursor = Delcursor->prev;
		Lcursor->next = Rcursor;
		Rcursor->prev = Lcursor;
	}
	free(Delcursor);

	return (1);
}
