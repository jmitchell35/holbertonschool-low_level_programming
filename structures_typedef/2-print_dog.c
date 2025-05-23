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
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}
