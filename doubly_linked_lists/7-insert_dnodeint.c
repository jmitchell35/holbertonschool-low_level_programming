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

	while (ptr->next)
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
	dlistint_t *Rcursor = *h, *Lcursor = *h, *new;
	unsigned int list_iter = 0;

	if (h == NULL) /*Null double-ptr */
		return (NULL);
	if (idx == 0) /*Index = first*/
		return (add_dnodeint(h, n));
	if (idx == (dlistint_len(*h) - 1)) /*index = last*/
		return (add_dnodeint_end(h, n));
	if (idx >= dlistint_len(*h)) /* index is off-range*/
		return (NULL);
	while (list_iter < idx) /*Placer les reperes*/
	{
		Rcursor = Rcursor->next;
		list_iter++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	Lcursor = Rcursor->prev;
	new->prev = Lcursor;
	new->next = Rcursor;
	new->n = n;
	Lcursor->next = new;
	Rcursor->prev = new;

	return (new);
}

