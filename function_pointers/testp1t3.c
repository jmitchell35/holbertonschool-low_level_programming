#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int nb_of_args = 0, i = 0;
	char *ptr;

	ptr = format;
	while (*ptr)
	{
		nb_of_args++;
		ptr++;
	}


}
