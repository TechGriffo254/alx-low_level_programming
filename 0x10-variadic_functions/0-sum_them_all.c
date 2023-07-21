#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of  the all its parameters
* @n: n args
* Return: sum / if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arguments;

if (n)
{
va_start(arguments, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
}
return (sum);
}
