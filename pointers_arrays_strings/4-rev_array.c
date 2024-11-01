#include "main.h"
/* Reverses the content of an array of int */

/**
* reverse_array - function reversing content of array
*
* @a: array of int
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int store_var;
	int *cursor;

	cursor = a + n - 1;
	while (a < cursor)
	{
		store_var = *a;
		*a = *cursor;
		*cursor = store_var;
		a++;
		cursor--;
	}
}
