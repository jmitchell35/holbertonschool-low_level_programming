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

	new = malloc(sizeof(list_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	new->len = (unsigned int)strlen(str);
	*head = new;
	return (new);
}
