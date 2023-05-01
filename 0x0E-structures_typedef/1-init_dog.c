#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog strucutre
 * @name: name of the diog
 * @age: his age
 * @owner: his owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->age = age;
	d->name =  name;
	d->owner = owner;
}
