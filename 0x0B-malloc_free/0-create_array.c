#include "main.h"

/**
 * create_array - create an array
 * @size: the  size of the array
 * @c: the value
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
