#include "main.h"
/**
 * _islower - A function that prints lowercase  chracters
 * @c: character to be tested
 * Return: returns an integer
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
