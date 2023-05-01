#include <stdlib.h>
#include "dog.h"

/**
 * len_f - returns the length
 * @s: string
 * Return: the length of the string
 */
int len_f(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
/**
 * *cp_hb - to cpy string
 * @dest: pointer dest
 * @src: string
 * Return: the pointer to dest
 */
char *cp_hb(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - that creates a new dog
 * @name: his name
 * @age: his age
 * @owner: his owner
 * Return: the ne created structre
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = len_f(name);
	l2 = len_f(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	cp_hb(dog->name, name);
	cp_hb(dog->owner, owner);
	dog->age = age;

	return (dog);
}
