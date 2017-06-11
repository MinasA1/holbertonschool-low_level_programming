#include "holberton.h"

/**
 * more_numbers - prints 10 times from 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
}
