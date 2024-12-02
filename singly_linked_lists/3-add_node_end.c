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
	unsigned int length = 0, i = 0;

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
	while (str[i])
	{
		length++;
		i++;
	}
	new->len = length;
	new->next = NULL;
	return (new);
}
