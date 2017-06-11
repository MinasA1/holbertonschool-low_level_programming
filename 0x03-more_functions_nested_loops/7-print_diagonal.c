#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: times char \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar('\\');
			_putchar('\n');
		for (i = 0; i < j; i++)
			_putchar(' ');
		}
	}
}
