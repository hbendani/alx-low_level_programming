#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: the destination
 * @src: the source
 * @n: number of bytes
 * Return: the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
