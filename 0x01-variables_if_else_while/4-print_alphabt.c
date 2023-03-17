#include <stdio.h>
/**
 * main - print all lower case alphabet expect q and e
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' &&  i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
