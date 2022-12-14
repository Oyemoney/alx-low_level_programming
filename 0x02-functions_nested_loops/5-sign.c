#include "main.h"

/**
 * print_sign - A function that prinst the sign of an integer
 * @n: integer to be tested
 * Return: returns an integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n === 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
