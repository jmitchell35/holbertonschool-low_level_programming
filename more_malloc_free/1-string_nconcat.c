#include <stdlib.h>
#include "main.h"
/*Function concat. str 1 with n bytes of str 2*/

/**
  * string_nconcat - concat. str1 with n bytes of str 2
  * @s1: pointer to string 1
  * @s2: pointer to string 2
  * @n: bytes from s2
  * Return: pointer to allocated memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_to_str, *str_cursor;
	unsigned int i = 0, length1 = 0, length2 = 0, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[length1]; length1++)
	for (; s2[length2]; length2++)
	size = length1 + length2 - (length2 - n);
	str_cursor = malloc(sizeof(char) * size);
	if (str_cursor == NULL)
		return (NULL);
	ptr_to_str = str_cursor;
	while (*s1)
	{
		*str_cursor = *s1;
		s1++;
		str_cursor++;
	}
	while (*s2 && i < n)
	{
		*str_cursor = *s2;
		s2++;
		str_cursor++;
		i++;
	}
	*str_cursor = '\0';
	return (ptr_to_str);
}
