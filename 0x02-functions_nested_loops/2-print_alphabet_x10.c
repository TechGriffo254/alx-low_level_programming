#include "main.h"

/**
 * print_alphabet_x10 - function that prints ten times alphabets in lower case
 *
 * Return - 0 (success), 1 (failure)
 */
void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
}
