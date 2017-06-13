#include "holberton.h"
#include <unistd.h>

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	if (i%2 != 0)
		i = (i - 1) / 2;
	else
		i = i / 2;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
