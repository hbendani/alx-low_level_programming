#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of input to be allocated
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (point == NULL)
	exit(98);
	return (point);
}
