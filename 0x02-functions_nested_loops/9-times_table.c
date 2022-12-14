#include "main.h"

/**
 * times_table - A function that prints 24 hrs
 *
 * Return: returns void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = (i * j);
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar((' ');
		}
		_putchar('\n');
	}
}
