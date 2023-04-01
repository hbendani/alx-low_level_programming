#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string dest
 * @src: string second
 * @n: number of character
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
