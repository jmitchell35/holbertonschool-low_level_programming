#include "function_pointers.h"
/*Function printing a name*/

/**
  * print_name - function printing name
  * @name: ptr to str
  * @f: pointer to function
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
