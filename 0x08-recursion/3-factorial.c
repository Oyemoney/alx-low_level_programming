#include "main.h"

/**
 * factorial - A function calculates factorial
 * @n: strings of characters to be printed
 * Return: returns solution to the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
