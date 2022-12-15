#include "main.h"

/**
 * _isupper - A function that checks uppercase characters
 *
 * Return: returns an integer
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
