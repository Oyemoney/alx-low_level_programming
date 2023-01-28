#include "main.h"

/**
 * void reverse_array - a function that rverses the elements in an array
 * @*a: pointer to the array to be reversed 
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
