#include "holberton.h"

/**
 * print_triangle - prints a square of char #
 * @size: size of square
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, s;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (s = (size - j - 1); s > 0; s--)
				_putchar(' ');
			for (i = j + 1; i > 0; i--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
