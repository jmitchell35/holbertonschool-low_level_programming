#include "lists.h"
/**
  * add_node_end - adds node to end of simply linked list
  * @head: pointer to pointer to list_t struct node
  * @str: const pointer to string
  * Return: the address of the new element, NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cursor = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (cursor == NULL)
		*head = new;
	else
	{
		while (cursor->next)
			cursor = cursor->next;
		cursor->next  = new;
	}
	new->str = strdup(str);
	new->len = (unsigned int)strlen(str);
	new->next = NULL;
	return (new);
}
