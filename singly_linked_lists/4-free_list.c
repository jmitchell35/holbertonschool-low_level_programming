#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: pointer to list_t struct node
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *cursor = head;

	while (cursor)
	{
		head = cursor->next;
		if (cursor->str)
			free(cursor->str);
		free(cursor);
		cursor = head;
	}
}
