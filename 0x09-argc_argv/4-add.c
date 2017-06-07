#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main - types the name of the progrmam
 *@argc: argument count
 *@argv: argument array type char
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int i, j, c = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
c = c + atoi(argv[i]);
}
printf("%d\n", c);
return (0);
}
