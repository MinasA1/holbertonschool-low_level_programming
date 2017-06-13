#include "holberton.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
