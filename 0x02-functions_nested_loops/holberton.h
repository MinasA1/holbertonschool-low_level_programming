#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
  char az;

for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
}

/**
 * print_alphabetx10 - prints alphabet ten times
 */
void print_alphabet_x10(void)
{
int i;
char az;

for (i = 0; i < 10; i++)
{
for (az = 'a'; az <= 'z'; az++)
  {
    putchar(az);
  }
putchar('\n');
}
}

/**
 * _islower - check if string is lowercase.
 *
 */

int _islower(int c)
{
if (c == {a-z})
return (1);
else 
return (0);
}
