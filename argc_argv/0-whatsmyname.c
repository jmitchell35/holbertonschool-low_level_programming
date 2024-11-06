#include "main.h"
#include <stdio.h>
/* Program prints its name followed by NL*/

/**
* main - Entry point
*
* @argc: integer, arguments count
* @argv[]: pointer to array of CLI args
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", *argv);
		return (0);
	}
	else
		return (0);
}
