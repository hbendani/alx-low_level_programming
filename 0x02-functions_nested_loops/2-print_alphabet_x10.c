#include <main.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	char i;
	
	while (n < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar("\n");
	n++;
	}
}
