#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*Function concats all args of program*/
/**
  * argstostr - concats all CLI arguments
  * @ac: int, number of args
  * @av: double-pointer to pointer to args
  * Return: char, concat. str, NULL if fail
  */
char *argstostr(int ac, char **av)
{
	char *concat_str = NULL;
	int mem_bytes = 0, i = 0, j = 0;

	for (; i < ac; i++)
		for (; av[i][j]; j++)
			mem_bytes++;

	concat_str = malloc(mem_bytes * sizeof(char));
	return (concat_str);
}
