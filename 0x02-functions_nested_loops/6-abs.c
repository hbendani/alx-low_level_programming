#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 *@n: the number to convert
 * Return: number pos
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val = n * -1;

		return (abs_val);
	}
	return (n);
}
