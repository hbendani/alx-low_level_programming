#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: the byte
 * @n: the number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
