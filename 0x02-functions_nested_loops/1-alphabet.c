#include <stdio.h>
/**
 * print_alphabet - function to print all alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
}
