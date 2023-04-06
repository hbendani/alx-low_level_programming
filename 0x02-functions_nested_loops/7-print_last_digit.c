#include <stdio.h>
/**
 * print_last_digit - print last didgit
 * @n: the number
 * Return: digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	last = last * -1;
	putchar(last + '0');
	return (last);
}
