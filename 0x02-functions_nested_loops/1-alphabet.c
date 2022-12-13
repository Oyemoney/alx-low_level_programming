#include <stdio.h>
#include "main.h"
/**
 * 1-alphabet.c - A function that prints lower case alphabets
 *
 * Return: returns void
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
