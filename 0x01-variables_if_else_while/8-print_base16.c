#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 8)
	{
		putchar(i % 10 + '0');
		i++;
	}
	char j = 'a';

	while (j >= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
