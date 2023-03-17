#include <stdio.h>
/**
 * main - print lowercase alphabet
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a', i <= 'z', i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
