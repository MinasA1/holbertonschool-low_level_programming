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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if(s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (i != (n - 1))
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
