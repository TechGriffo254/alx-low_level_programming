#include "main.h"

/**
* reverse_array -  function that reverses the content of an array of integers.
* @a: array pointer
* @n: numero di elementi nell'array
*/

void reverse_array(int *a, int n)
{
int k;
int l;

k = 0;
while (k < n)
{
n--;
l = a[k];
a[k] = a[n];
a[n] = l;
k++;
}
}
