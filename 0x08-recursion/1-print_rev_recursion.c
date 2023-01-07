#include "main.h"

/**
 * _print_rev_recursion - A function that reverses a string
 * @s: string to be reversed
 * Return: returns void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
