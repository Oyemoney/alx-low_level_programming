#include "main.h"

/**
 * _strlen_recursion - A function that returns the number of character 
 * in a string
 * @s: strings of characters to be printed
 * Return: returns no. of characters
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
