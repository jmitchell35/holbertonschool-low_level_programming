#include <stdlib.h>
#include "main.h"
/*Function frees grid allocated by previously created function*/
/**
  * free_grid - function
  * @grid: double-pointer to array of int
  * @height: int, array height, nb of lines
  * Return: ptr to two-dimensional array of int
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
