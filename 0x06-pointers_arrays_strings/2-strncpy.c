#include "main.h"
/**
 * _strncpy - copies string
 * @dest: string var
 * @src: the string to copy
 * @n: number of character
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	j = i;
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
