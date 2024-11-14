#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*Function frees a dog_t*/

/**
* free_dog - frees memory allocated to dog_t
* @d - pointer to dog_t struct
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
