#include "main.h"

/**
 * _isdigit - A function that checks uppercase characters
 * @c: the character to be tested
 * Return: returns an integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
