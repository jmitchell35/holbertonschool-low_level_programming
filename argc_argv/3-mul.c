#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/* Program that multiplies two numbers */

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv: pointer to array of CLI arguments
* Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	char *error_ptr1, *error_ptr2;
	int operand1, operand2;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	operand1 = strtol(argv[1], &error_ptr1, 10);
	operand2 = strtol(argv[2], &error_ptr2, 10);
	if (*error_ptr1 != '\0' || *error_ptr2 != '\0')
	{
		printf("Error \n");
		return (1);
	}
	if (operand1 > INT_MAX || operand1 < INT_MIN || operand2 > INT_MAX || operand2 < INT_MIN)
	{
		printf("Error\n");
		return (1);
	}
	if (operand1 != 0 && (operand2 > INT_MAX / operand1 || operand2 < INT_MIN / operand1))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", operand1 * operand2);
	return (0);
}
