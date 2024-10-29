#include "main.h"
/* Swaps values of two integers */

/**
* swap_int - swaps values of two integers
*
* @a: integer
* @b : another integer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int store_var = *a;

	*a = *b;
	*b = store_var;
}
