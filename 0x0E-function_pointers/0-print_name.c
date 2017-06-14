#include <stdlib.h>

/**
 * print_name - utilizes function f to print name
 * @name: name_string to print
 * @f: pointer to function that will print
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	else
		f(name);
}
