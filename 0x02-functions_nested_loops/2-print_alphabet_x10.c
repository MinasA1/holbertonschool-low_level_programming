#include "holberton.h"

/**
 * print_alphabetx10 - prints alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	char az;

	for (i = 0; i < 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
