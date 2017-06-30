#include "holberton.h"

/**
 * print_binary - prints number in binary
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = (sizeof(n) * CHAR_BIT - 1), j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		if (((n >> i) & 1))
			j = 1;
		_putchar(((n >> i) & 1) ? '1' : '\0');
		_putchar(((((n >> i) & 1) == 0) & (j == 1)) ? '0' : '\0');
		i--;
	}
}
