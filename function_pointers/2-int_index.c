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
	int i = 0, temp = -1;

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (; i < size ; i++)
	{
		temp = cmp(array[i]);
	if (temp != 0)
		break;
	}
	return (i);
}
