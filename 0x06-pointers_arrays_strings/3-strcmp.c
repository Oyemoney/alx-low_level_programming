#include "main.h"

/**
 * int _strcmp - a function that compares two strings
 * @s1: strings to be compared
 * @s2: strings to be compared 
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int m;

	for (; s1[i] != 0; i++)
	{
		if (s2[i] == '\0')
			break;
		else if (s1[i] > s2[i] || s2[i] > s1[i])
		{
			m = s1[i] - s2[i];
			return (m);
		}
		else if (s1[i] == s2[i])
			continue;
	}
	return (0);

}
