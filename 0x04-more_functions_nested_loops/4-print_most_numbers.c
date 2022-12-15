#include "main.h"

/**
 * print_most_numbers - A function that checks uppercase characters
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
