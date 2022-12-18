#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * 
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3)
		{
			printf("Fizz ");
		}
		else if (i % 5)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	retuen (0);
}
