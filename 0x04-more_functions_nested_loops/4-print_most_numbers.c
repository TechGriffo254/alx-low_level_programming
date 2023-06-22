#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - this function Prints numbers between 0 to 9
* followed by a new line
*
* Return: there is no return because it is void
*/
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
