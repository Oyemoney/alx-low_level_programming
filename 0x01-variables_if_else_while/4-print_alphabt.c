#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		if (g != 'e' && g != 'q')
			putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
