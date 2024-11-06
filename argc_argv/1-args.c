#include "main.h"
#include <stdio.h>
/* Prints the number of args passed to it, prg name excl. */

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv: pointer to array of CLI args
* Return: always 0 (success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;
	int sum = 0;

	for (count = 1; count < argc && argc > 1; count++)
		sum++;
	printf("%d\n", sum);
	return (0);
}
