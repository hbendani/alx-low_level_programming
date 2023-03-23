#include <stdio.h>
/**
 * jack_bauer - every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	for (b = 0; b < 4; b++)
	for (c = 0; c < 6; c++)
	for (d = 0; d < 10; d++)
	{
		printf("%d%d:%d%d\n", a, b, c, d);
	}
}
