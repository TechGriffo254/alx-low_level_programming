#include "main.h"
#include <stdio.h>

/**
* print_numbers - Prints numbers between 0 to 9 folloewd by a new line
*
* Return: nothing
*/
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
