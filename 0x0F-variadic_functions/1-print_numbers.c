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

	if (separator != NULL)
		printf("%s", separator);
	va_start(numbers, n);
	for (i = 0; i < n - 1; i++)
		printf("%d, ", va_arg(numbers, int));
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
	exit(EXIT_SUCCESS);
}
