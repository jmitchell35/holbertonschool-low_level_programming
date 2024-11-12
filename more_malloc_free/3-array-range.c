#include <stdlib.h>
#include "main.h"
/*Function creates an array of integers*/

/**
  * array_range - creates array of int
  * @min: int, min value of range
  * @max: int, max value of range
  * Return: pointer to allocated memory (new array)
  */
int *array_range(int min, int max)
{
	int *array = NULL, i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max + 1) - min));
	if (array == NULL)
		return (NULL);
	for (; min < max + 1; min++)
	{
		array[i] = min;
		i++;
	}
	return (array);
}
