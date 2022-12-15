#include "main.h"

/**
 * _isupper - A function that checks uppercase characters
 * @c: the character to be tested
 * Return: returns an integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	       return (1);
	else
		return (0);
}
