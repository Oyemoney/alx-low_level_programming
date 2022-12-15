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
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				if ((j == 2 && k == 8) || (j == 3 && k == 9) || (j == 4 && k == 8) || (j == 5 && k == 5) || (j == 6 && k == 6) || (j == 7 && k == 7) || (j == 8 && k == 8) || (j == 9 && k == 9))
					continue
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
