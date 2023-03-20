#include <stdio.h>
/**
 * main - print all com of 3 digit
 * Return: 0
 */
int main(void)
{
	int i, j, z;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			if (j > i)
			{
				for (z = 0 ; z < 10 ; z++)
				{
					if (z > j)
					{
						putchar(i % 10 + '0');
						putchar(j % 10 + '0');
						putchar(z % 10 + '0');
						if (i < 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
