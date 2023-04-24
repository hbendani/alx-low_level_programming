#include "main.h"
/**
 * print_diagsums - sum of 2 diag of a square matrix of integers
 * @a: array
 * @size: size
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int counter1, counter2, sum1, sum2 = 0;

	for (counter1 = 0; counter1 < size; counter1++)
	{
		sum1 += a[(size + 1) * counter1];
	}
	for (counter2 = 0; counter2 < size; counter2++)
	{
		sum2 += a[(size - 1) * (counter2 + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
