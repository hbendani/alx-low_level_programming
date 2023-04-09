#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input 2
 * @s2: input 1
 * Return: diff between 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
