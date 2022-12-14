#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @c: integer to be tested
 * Return: Always an integer
 */
int print_last_digit(int c)
{
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
