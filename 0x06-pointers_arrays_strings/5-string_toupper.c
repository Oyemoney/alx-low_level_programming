#include "main.h"

/**
 * char *string_toupper - a function that changes the character in a string
 * @s: string to be changed
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < 'a' || s[i] > 'z')
			continue;
		s[i] = s[i] - 32;
	}
	return (s);
}
