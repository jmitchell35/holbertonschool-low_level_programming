#include "lists.h"
/**
  * sum_dlistint - returns the sum of all the data of list
  * @head: double pointer to first node
  * Return: sum, 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;
	size_t sum = 0;

	if (head == NULL)
		return (sum);
	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
