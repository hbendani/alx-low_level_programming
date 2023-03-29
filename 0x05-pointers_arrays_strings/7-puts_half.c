#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: 0
 */
void puts_half(char *str)
{
	int i, c = 0;
	char *s = str;

	while (*s != '\0')
	c++;
	if (c % 2 == 0)
	{
		c = c / 2;
	}
	else
	{
		c = (c + 1) / 2;
	}
	for (i = c; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}
