#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*Function initilizes variable of type struct dog*/

/**
  * init_dog - initilizes variable of type struct dog
  * @d: ptr to struct
  * @name: ptr to member of struct
  * @age: float, age of dog
  * @owner: pointer to member of struct
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
