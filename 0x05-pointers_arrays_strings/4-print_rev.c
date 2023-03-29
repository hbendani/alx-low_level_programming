#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int i, c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s = s - 1;

	for (i = c; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
