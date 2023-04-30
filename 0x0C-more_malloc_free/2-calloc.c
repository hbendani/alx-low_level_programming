#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *pointer;

	if (size == 0 || nmemb == 0)
	return (NULL);

	j = nmemb * size;

	pointer = malloc(j);
	if (pointer == NULL)
	return (NULL);

	while (i < j)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
