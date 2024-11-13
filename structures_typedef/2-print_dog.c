#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*Function prints a struct dog*/

/**
  * print_dog - prints a struct dog type
  * @d: ptr to struct
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
