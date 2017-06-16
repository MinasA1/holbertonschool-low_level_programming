#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @format: list of types of arguments
 *
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	union types {
		int i;
		float f;
		char c;
		char *s;
	} checktype;

	va_start(args, format);
	while(format[i])
	{
	switch (format[i])
	{
	case 'c':
		checktype.c = va_arg(args, int);
		printf("%c", checktype.c);
		break;
	case 'i':
	        checktype.i = va_arg(args, int);
		printf("%d", checktype.i);
		break;

	case 'f':
		checktype.f = va_arg(args, double);
		printf("%f", checktype.f);      ;
		break;
	case 's':
		checktype.s = va_arg(args, char *);
		printf("%s", checktype.s);
		break;
	default:
		break;
	}
		if (format[i])
			printf(", ");
	i++;
	}
	printf("\n");
	va_end(args);
	exit(EXIT_SUCCESS);
}
