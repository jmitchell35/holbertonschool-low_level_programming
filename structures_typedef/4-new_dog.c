#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*Function creates a new dog*/

/**
* _strlen - returns length of string
* @s: pointer to string
* Return: length as int
*/
int _strlen(char *s)
{
char *ptr = s;

while (*ptr)
ptr++;
return (ptr - s);
}
/**
* _strdup - function, duplicates string
*
* @str: original string passed to function
* Return: ptr to copy, NULL if str is NULL
*/
char *_strdup(char *str)
{
char *str_copy;
unsigned int i, size;

if (str == NULL)
{
return (NULL);
}
size = (unsigned int)_strlen(str);
str_copy = malloc(sizeof(char) * (size + 1));
if (str_copy == NULL)
return (NULL);
for (i = 0; i < (unsigned int)_strlen(str) + 1; i++)
str_copy[i] = str[i];
return (str_copy);
}
/**
  * new_dog - creates a new dog, type dog_t
  * @name: ptr to name of
  * @age: float, age of
  * @owner: ptr to owner name
  * Return: ptr to dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_to_type;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr_to_type = malloc(sizeof(dog_t));
	if (ptr_to_type == NULL)
		return (NULL);

	ptr_to_type->name = _strdup(name);
	if (ptr_to_type->name == NULL)
	{
		free(ptr_to_type);
		return (NULL);
	}
	ptr_to_type->owner = _strdup(owner);
	if (ptr_to_type->owner == NULL)
	{
		free(ptr_to_type->name);
		free(ptr_to_type);
		return (NULL);
	}
	ptr_to_type->age = age;
	return (ptr_to_type);
}
