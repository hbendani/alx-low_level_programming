#include <stdio.h>
/**
 * print_sign - the sign of a number
 * @n: the number
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	if (n == 0)
	{
		putchar(48);
		return (0);
	}
	putchar(45);
	return (-1);
}
