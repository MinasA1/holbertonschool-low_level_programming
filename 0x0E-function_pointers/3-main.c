#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates and prints the result of 2 args according to operator
 * @argc: argument count
 * @argv: argument array pointer type char
 *
 * Return: 0 for succes Error for failure
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc, (*funcop)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	funcop = get_op_func(operator);
	if (funcop == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = funcop(num1, num2);
	printf("%d\n", calc);
	return (0);
}
