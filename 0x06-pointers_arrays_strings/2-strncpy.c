#include "main.h"

/**
 * char *_strncpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes to copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
