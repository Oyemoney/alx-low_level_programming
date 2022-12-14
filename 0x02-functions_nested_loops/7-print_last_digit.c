#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @c: integer to be tested
 * Return: Always an integer
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		c = c % 10;
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = c % 10;
		_putchar(c + '0');
		return (c);
	}
}
