#include "main.h"

/**
 * print_numbers - A function that checks uppercase characters
 *
 * Return: returns void
 */
int print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
