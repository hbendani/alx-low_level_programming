#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character
 * Return: 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
