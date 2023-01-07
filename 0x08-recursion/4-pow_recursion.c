#include "main.h"

/**
 * _pow_recursion - A function calculates the power of an integer
 * @x: base integer
 * @y: power 
 * Return: returns solution 
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(y - 1)));
	}
}
