#include "main.h"

/**
 * print_lines - A function that checks uppercase characters
 *
 * Return: returns void
 */
void print_lines(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
