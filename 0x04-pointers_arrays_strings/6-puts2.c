#include "holberton.h"
#include <unistd.h>

/**
 * puts2 - prints one char out of 2 of a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i = i + 2;
	}
	write(1, "\n", 1);
}
