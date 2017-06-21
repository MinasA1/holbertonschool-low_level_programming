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
	int a;

	va_start(numbers, n);
	for (i = 1; i < n; i++)
	{
		a = va_arg(numbers, int);
		if (a <= INT_MAX && a >= INT_MIN)
		{
			printf("%d", a);
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
	exit(EXIT_SUCCESS);
}
