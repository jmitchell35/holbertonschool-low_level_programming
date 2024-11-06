#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error \n");
		return (1);
	}
	return (0);
}
