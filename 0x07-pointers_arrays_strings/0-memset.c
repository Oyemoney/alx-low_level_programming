#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that changes values stored in a memory block.
 * @s: pointer to the starting memory area
 * @b: variable that stores the value that replaces the previouds value
 * @n: nymber of bytes to be replaced
 * Return: returns  the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
