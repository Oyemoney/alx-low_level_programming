#include "main.h"
#include <limits.h>

/**
 * print_last_digit - A function that prints the last digit of a number
 * @c: integer to be tested
 * Return: Always an integer
 */
int print_last_digit(int c)
{
	int a;

	if (c < 0)
	{
		a = -(c % 10);
		_putchar(a +'0');
		return (a);
	}
	else
	{
		a = c % 10;
		_putchar(a +'0');
		return (a);
	}
}
