#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, l;

	if (min > max)
	return (NULL);

	l = max - min + 1;
	pointer = malloc(l * sizeof(int));
	if (!pointer)
	return (NULL);

	for (i = 0; i < l; i++)
	pointer[i] = min++;

	return (pointer);
}
