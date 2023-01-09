#include "main.h"

/**
 * char *_strcat - A function that concatenates two strings
 * @dest: string to be copied to
 * @src: string to copy from
 * @n: number of bytes to be copied
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j <= n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
