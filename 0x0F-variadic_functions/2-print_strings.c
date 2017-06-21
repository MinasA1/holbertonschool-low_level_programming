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

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(strings, char *);

		if(s = NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (separator != NULL)
				printf("%s", separator);
			else
				printf("(nil)");
		}
	}
	char *s = va_arg(strings, char *);
	if (s = NULL)
		printf("(nil)");
	else
		printf("%s", va_arg(strings, char *));
	printf("\n");
	va_end(strings);
	exit(EXIT_SUCCESS);
}
