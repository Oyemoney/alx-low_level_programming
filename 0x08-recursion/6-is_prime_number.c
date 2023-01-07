#include "main.h"

/**
 * is_prime_number - A function that checksif an integer is
 * a prime number
 * @n: integer to be checked
 * Return: returns 1 0r 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0 && n != 2)
	{
		return (0);
	}
	else if (n % 3 == 0 && n != 3)
	{
		return (0);
	}
	else if (n % 5 == 0 && n != 5)
	{
		return (0);
	}
	else if (n % 7 == 0 && n != 7)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
