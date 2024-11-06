#include "main.h"
#include <stdio.h>
/* Prints all arguments provided through CLI, prg name incl. */

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv: pointer to array of CLI args
* Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
