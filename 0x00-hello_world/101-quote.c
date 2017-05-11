#include <stdio.h>
/**
 * main - entry point
 * alternative way for dsiplaying a msg
 * Return: Always 0 (Success)
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*s)
putchar(*s++);
return (1);
}
