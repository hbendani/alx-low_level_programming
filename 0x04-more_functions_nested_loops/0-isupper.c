#include <stdio.h>
/**
 * _isupper - check if character is uppercase
 * @c: the character to check
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
