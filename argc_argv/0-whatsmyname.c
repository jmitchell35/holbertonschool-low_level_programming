#include "main.h"
#include <stdio.h>
/* Program prints its name followed by NL*/

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv: pointer to array of CLI args
* Return: 0 (success) or 1 (no name to print)
*/
int main(int argc, char *argv[])
{
	if (argc >= 1 && argv[0])
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
		return (1);
}
