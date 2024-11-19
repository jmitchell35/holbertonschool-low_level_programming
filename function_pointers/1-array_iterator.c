#include "function_pointers.h"
/*Executes a function given as param. on each element of an array*/

/**
  * array_iterator - iterates the array and apply action
  * @array: ptr to array
  * @size: size of the array
  * @action: function to apply to elements
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL)
		return;

	if (size <= 0)
		return;

	for (; i < (int)size ; i++)
		action(array[i]);
}
