#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to get last digit
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n + '0');
	return (n);
}
