#include "main.h"

/**
 * _isalpha - A function that prints alphabets
 * @c: character to test
 * Return: returns an integer
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

