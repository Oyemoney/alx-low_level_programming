#include "main.h"

/**
 * char *_strcat - A function that concatenates two strings
 * @dest: string to be copied to
 * @src: string to copy from
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/**
		 * ntin in the loop
		 */
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
