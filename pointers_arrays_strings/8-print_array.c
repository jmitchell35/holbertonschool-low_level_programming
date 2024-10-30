#include "main.h"
#include <stdio.h>
/* Prints n elements of an array of int, NL, printf allowed */

/**
* print_array - prints n elements
*
* @a: array of integers
* @n: number of elements to print
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n != 0)
	{
	if (i == n - 1)
		printf("%d\n", a[i]);
	else
		printf("%d, ", a[i]);
	i++;
	}
}
