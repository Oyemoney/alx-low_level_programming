#include "main.h"

/**
 * _abs - A function that print the absolute value of an integer
 * @c: integer to be tested
 * Return: returns an integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else
		return (c);
}
