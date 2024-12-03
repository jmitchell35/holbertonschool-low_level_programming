#include "lists.h"
/**
 * dlistint_len - Returns number of elements in doubly linked list
 * @h: const ptr to doubly linked list
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
  * insert_dnodeint_at_index - inserts node into doubly linked list at index
  * @h: double-pointer to the first node of the list
  * @idx: unsigned int, index where node should be inserted
  * @n: int, data for new node
  * Return: the address of the new node, NULL if failed or impossible
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Rcursor = *h, *Lcursor, *new;
	unsigned int list_iter;

	if (Rcursor == NULL)
		return (NULL);
	list_iter = 0;
	if (list_iter == idx)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h) - 1)
		return (add_dnodeint_end(h, n));
	while (list_iter < idx && Rcursor)
	{
		Rcursor = Rcursor->next;
		list_iter++;
	}
	if (list_iter < idx && Rcursor == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	Lcursor = Rcursor->prev;
	new->prev = Lcursor;
	new->next = Rcursor;
	new->n = n;
	Lcursor->next = new;
	Rcursor->prev = new;

	return (Lcursor);
}
