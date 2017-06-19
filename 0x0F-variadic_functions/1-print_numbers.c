#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @seperator: pointer to string to be printed
 * @n: number of parameters
 *
 * Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 1; i < n; i++)
	{
		printf("%d, ", va_arg(numbers, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
	exit(EXIT_SUCCESS);
}
