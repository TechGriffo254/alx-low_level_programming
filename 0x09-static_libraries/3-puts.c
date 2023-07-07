#include "main.h"

/**
 * _puts - print string to stdout
 * @str: pointer to the string be printed
 */
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
