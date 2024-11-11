#include <stdlib.h>
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
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = (unsigned int)_strlen(str);
	str_copy = malloc(sizeof(char) * (size + 1));
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; i < (unsigned int)_strlen(str) + 1; i++)
		str_copy[i] = str[i];
	return (str_copy);
}
/**
  * _strlen - returns length of string
  * @s: pointer to string
  * Return: length as int
  */
int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr)
		ptr++;
	return (ptr - s);
}
