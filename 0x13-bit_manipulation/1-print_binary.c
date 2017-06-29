#include "holberton.h"

/**
 * print_binary - prints number in binary
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 1u <<  (sizeof(unsigned int) * CHAR_BIT - 1);;

	while (i > 0)
	{
		_putchar((n & i) ? '1' : '0');
		i >>= 1;
	}
}
