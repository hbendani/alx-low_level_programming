#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
				dup[size] = str[size];

			return (dup);
		}
	}
	return (NULL);
}
