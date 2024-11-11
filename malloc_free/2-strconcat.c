#include <stdlib.h>
#include <string.h>
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
		size = strlen(s2) + 1;
	else if (s2 == NULL)
		size = strlen(s1) + 1;
	else
		size = strlen(s1) + strlen(s2) + 1;

	str_copy = (char *)malloc(size * sizeof(char));
	if (!string_copy)
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
