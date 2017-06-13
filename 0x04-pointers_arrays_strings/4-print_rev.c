#include "holberton.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	for (i = i; i >= 0; i--)
		write(1, &s[i], 1);
	write(1, "\n", 1);
}
