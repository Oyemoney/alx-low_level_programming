#include "main.h"
#include <limits.h>

/**
 * print_last_digit - A function that prints the last digit of a number
 * @c: integer to be tested
 * Return: Always an integer
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = c * (-1);
	_putchar((c % 10) + '0');
	return (c % 10);
}
