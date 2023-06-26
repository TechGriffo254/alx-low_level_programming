#include "main.h"
#include <stdio.h>

/**
* print_array - print an array.
* @a: the array to print.
* @n: array's length
*/

void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
