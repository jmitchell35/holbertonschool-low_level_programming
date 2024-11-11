#include <stdlib.h>
#include "main.h"
/*Function creates array of chars, initializes it with specific char*/
/**
  * create_array - function, creates array
  *
  * @size: size of array
  * @c: char, initializer
  * Return: ptr to array, NULL if size is 0 or fails
  */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < size ; i++)
		array[i] = c;
	return (array);
}
