#include "main.h"

/**
 * print_diagonal - A function that checks uppercase characters
 * @n: input number of times to print '\'
 * Return: returns a diagonal line
 */
void print_diagonal(int n)
{
        int co, i;

        if (n <= 0)
        {
                putchar('\n');
        }
        else
        {
                for (co = 1; co <= n; co++)
                {
                        for (i = 1; i < co; i++)
                        {
                                
                                putchar(' ');
                        }
                        putchar('\\');
                        putchar('\n');
                }
        }
}
