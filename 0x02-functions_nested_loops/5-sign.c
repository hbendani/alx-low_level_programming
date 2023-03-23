#include <stdio.h>
/**
 * print_sign - the sign of a number
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	printf("-");
	return (-1);
}
