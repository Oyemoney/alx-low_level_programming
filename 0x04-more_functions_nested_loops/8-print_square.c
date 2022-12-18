#include "main.h"

/**
 * print_square - A function that checks uppercase characters
 * @n: input number of times to print '\'
 * Return: returns a square
 */
void print_square(int n)
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
			for (i = 1; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
