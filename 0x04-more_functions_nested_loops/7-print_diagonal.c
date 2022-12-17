#include "main.h"

/**
 * print_diagonal - A function that checks uppercase characters
 * @n: input number of times to print '\'
 * Return: returns a diagonal line
 */
void print_diagonal(int n)
{
	int co, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (i = 1; i < co; i++)
			{
				if (i == 1)
					continue;
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
