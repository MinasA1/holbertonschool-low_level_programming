#include "holberton.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			t = i * j;
			_putchar(' ');
			if (t >= 10)
			{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(t + '0');
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
