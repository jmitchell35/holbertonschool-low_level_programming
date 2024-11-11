#include <stdlib.h>
#include "main.h"
/*Function concatenates two strings*/
/**
  * str_concat - function, concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: ptr to copy of concatenated strings
  */
char *str_concat(char *s1, char *s2)
{
	char *str_copy, *str_copy_origin;
	unsigned int i, size;

	if (s1 == NULL)
		size = _strlen(s2) + 1;
	else if (s2 == NULL)
		size = _strlen(s1) + 1;
	else
		size = _strlen(s1) + _strlen(s2) + 1;

	str_copy = (char *)malloc(size * sizeof(char));
	if (!str_copy)
		return (NULL);

	str_copy_origin = str_copy;
	i = 0;
	while (*s1 && i < size)
	{
		str_copy[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 && i < size)
	{
		str_copy[i] = *s2;
		s2++;
		i++;
	}
	return (str_copy_origin);
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
