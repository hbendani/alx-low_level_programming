#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: number
 * @n: elemnt
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	printf("%d, ", a[i]);
	if (i == (n - 1))
	printf("%d", a[i - 1]);
	printf("\n");
}
