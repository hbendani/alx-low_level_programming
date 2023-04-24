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

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
