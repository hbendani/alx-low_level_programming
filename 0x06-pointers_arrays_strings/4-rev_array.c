#include "main.h"
/**
 * reverse_array - reverse content f array
 * @a: arry to reverse
 * @n:  number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j = 0;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
