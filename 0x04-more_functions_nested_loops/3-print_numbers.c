#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: void
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	putchar(i % 10 + '0');
	putchar('\n');
}
