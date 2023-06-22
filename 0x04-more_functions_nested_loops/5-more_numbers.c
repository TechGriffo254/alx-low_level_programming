#include "main"
#include <stdio.h>

/**
* more_numbers - Print numbers between 0 to 14 into the next line
*
* Return: null
*/
void more_numbers(void)
{
int j;
int k;

for (k = 0; k < 10; k++)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
j++;
}
_putchar('\n');
}
}
