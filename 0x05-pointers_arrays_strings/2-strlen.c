#include "main.h"
/**
 * _strlen - eturns the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
