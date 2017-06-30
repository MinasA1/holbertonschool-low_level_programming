#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: number of chars printed
 */
int _putchar(char c)
{
	int i;

	i = write(1, &c, 1);
	return (i);
}
