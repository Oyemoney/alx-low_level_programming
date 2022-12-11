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
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i > j || i > k || j > k)
					continue;
				if (i == j || i == k || j == k)
					continue;
				if (i == j && i == k)
					continue;
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
