#include "holberton.h"

/**
 * print_square - prints a square of char #
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
