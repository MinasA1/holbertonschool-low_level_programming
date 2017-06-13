#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of ints
 * @a: pointer to array
 * @n: numbers of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i < n; i++)
		printf("%d, ", a[i - 1]);
	printf("%d\n", a[n - 1]);
}
