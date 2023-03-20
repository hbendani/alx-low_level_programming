#include <stdio.h>
#include <unistd.h>
/**
 * main - print a text wihtout using printf
 * Return: 0
 */
int main(void)
{
	char texte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, texte, strlen(texte));
	return (0);
}
