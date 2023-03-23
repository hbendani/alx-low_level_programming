#include <stdio.h>
/**
 * print_last_digit - print last didgit
 * Return: digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
		return (last);
	}
	return (last);
}
