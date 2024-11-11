#include <stdlib.h>
#include <string.h>
#include "main.h"
/*Function creates duplicate of str string*/
/**
  * _strdup - function, duplicates string
  *
  * @str: original string passed to function
  * Return: ptr to copy, NULL if str is NULL
  */
char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	str_copy = malloc((sizeof(char) * strlen(str)) + 1);
	for (i = 0; i < strlen(str) + 1; i++)
		str_copy[i] = str[i];
	return (str_copy);
}
