#include "main.h"

/**
 * _puts - prints a string followed by new line.
 *
 *@str: the string to be printed
 *
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
