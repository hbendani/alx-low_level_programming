#include <stdio.h>
/**
 * main - printthe name of the file it was compiled from, followed by a nw line
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
