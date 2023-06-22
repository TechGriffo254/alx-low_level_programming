#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @k: number of times the character "_" should be printed
*/
void print_line(int k)
{
if (k <= 0)
{
_putchar('\n');
} else
{
int k;

for (k = 1; k <= n; k++)
{
_putchar('_');
}
_putchar('\n');
}

}
