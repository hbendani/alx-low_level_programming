#include <stdio.h>
/**
 * main - print lowercase letters in reverse
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
