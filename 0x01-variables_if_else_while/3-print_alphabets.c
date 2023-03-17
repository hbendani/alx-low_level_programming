#include <stdio.h>
/**
 * main - print lower and then upper case letters
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
