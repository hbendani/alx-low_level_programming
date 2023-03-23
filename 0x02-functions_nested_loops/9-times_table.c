#include <stdio.h>
/**
 * times_table - 9 times table
 * Return: void
 */
void times_table(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d", n * i);
			if (i != 9)
			printf(", ");
			if (i*n < 9)
			printf(" ");
		}
		printf("\n");
	}
}
