#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string second
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{

			if (*s == accept[counter])
				return (s);
		}
	}
	return (0);
}
