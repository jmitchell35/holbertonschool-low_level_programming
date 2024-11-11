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
	unsigned int i = 0, j = 0, size;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	size = _strlen(s1) + _strlen(s2) + 1;

	str_copy = (char *)malloc(size * sizeof(char));
	if (!str_copy)
		return (NULL);

	str_copy_origin = str_copy;
	while (s1[i])
	{
		str_copy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str_copy[i] = s2[j];
		j++;
		i++;
	}
	str_copy[i] = '\0';
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
