#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: n value
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("98\n");
	else if (n <98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
}
