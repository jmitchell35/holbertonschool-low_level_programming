#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Program that adds positive numbers */

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv: pointer to array of CLI arguments
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	char *ptr = argv[i];

	while (*ptr)
	{
	if (*ptr < 48 || *ptr > 57)
	{
		printf("Error\n");
		return (1);
	}
	ptr++;
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
