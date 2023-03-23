#include <stdio.h>
/**
 * _isdigit - check if its a digit 
 * @c: the element to check
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	return (1);
	return (0);
}
