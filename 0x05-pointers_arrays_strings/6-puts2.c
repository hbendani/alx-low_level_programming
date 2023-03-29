#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: String
 * Return: 0
 */
void puts2(char *str)
{
	int i, c = 0;
	char *s = str;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	c = c - 1;
	for (i = 0; i <= c; i++)
	if (i % 2 == 0)
	_putchar(str[i]);
	_putchar('\n');
}
