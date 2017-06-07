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
int c = argc - 1;

printf("%d\n", c);

return (0);
}
