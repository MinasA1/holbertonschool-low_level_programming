#include <stdlib.h>
#include <stdio.h>
/**
 *main - types the name of the progrmam
 *@argc: argument count
 *@argv: argument array type char
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
  {
printf("%s\n", argv[i]);
  }
return (0);
}
