#ifndef DOG_H
#define DOG_H
/**
  * struct dog - age, name and owner of dog
  * @age: float, age of dog
  * @name: char, name of
  * @owner: name of
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *dog_t - alias for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
