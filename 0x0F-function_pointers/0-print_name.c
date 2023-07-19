#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints name
 * @name: person's names
 * @f: point to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
