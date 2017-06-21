#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * print_numbers - returns the sum of all its parameters.
 * @separator: pointer to string to be printed
 * @n: number of parameters
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if ( i != (n-1))
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
	}
	va_end(numbers);
}
