#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char g = 'a';
	char h = 'A';

	while (g <= 'z')
	{
		putchar(g);
		g++;
	}
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
