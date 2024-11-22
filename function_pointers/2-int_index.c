#include "function_pointers.h"
/*Searches for int*/

/**
  * int_index - searches for an integer
  * @array: ptr to array
  * @size: size of the array
  * @cmp: ptr to comparison function
  * Return: index of match, -1 (no match - null, negative size)
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size ; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}

