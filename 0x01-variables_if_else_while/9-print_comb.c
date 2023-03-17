#include <stdio.h>
/**
 * main - print all possible comb of signle digit
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar((9 % 10) + '0');
	return (0);
}
