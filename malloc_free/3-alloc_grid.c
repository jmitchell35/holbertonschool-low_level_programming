#include <stdlib.h>
#include <string.h>
#include "main.h"
/*Function returns pointer to two-dimensional array of integers*/
/**
  * alloc_grid - function
  * @width: int, array width, nb of columns
  * @height: int, array height, nb of lines
  * Return: ptr to two-dimensional array of int
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
		array[i] = (int *)malloc(width * sizeof(int));
	if (array == NULL)
		return (NULL);
	return (array);
}
