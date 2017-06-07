#include <stdlib.h>
#include <stdio.h>
/**
 *main - types the name of the progrmam
 *@argc: argument count
 *@argv: argument array type char
 *Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int a, b, c;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (0);
}
}
