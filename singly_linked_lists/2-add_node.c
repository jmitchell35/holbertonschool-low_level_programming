#include "lists.h"
/**
  * add_node - adds node to beginning of simply linked list
  * @head: pointer to pointer to list_t struct node
  * @str: const pointer to string
  * Return: the address of the new element, NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0, i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	while (str[i])
	{
		length++;
		i++;
	}
	new->len = length;
	*head = new;
	return (new);
}
