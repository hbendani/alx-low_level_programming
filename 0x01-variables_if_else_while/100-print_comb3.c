#include <stdio.h>
/**
 * main - print all possible comb of two digit
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (j > i)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
