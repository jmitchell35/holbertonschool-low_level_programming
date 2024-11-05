#include "main.h"
#include <stdio.h>
/* Prints the sum of diagonals of square matrix - std lib allowed */

/**
* print_diagsums - prints the sum of both diagonals
*
* @a: pointer to square matrix
* @size: integer, square matrix size
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	long int sum_left_d = 0, sum_right_d = 0;

	for  (i = 0; i < size; i++)
	{
		sum_left_d += a[i * size + i];
		sum_right_d += a[i * size + (size - i - 1)];
	}
	printf("%ld, %ld\n", sum_left_d, sum_right_d);
}
