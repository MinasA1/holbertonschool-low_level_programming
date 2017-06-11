#include "holberton.h"

/**
 * print_line - prints n times the char _
 * @n: times char _ to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
