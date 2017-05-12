#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char az;
int i;

for (i = 0; i < 10; i++)
putchar(i + '0');
for (az = 'a'; az <= 'f'; az++)
putchar(az);
putchar('\n');
return (0);
}
