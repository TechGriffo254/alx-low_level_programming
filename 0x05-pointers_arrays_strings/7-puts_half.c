#include "main.h"

/**
 * puts_half - prints the second half of strings
 *@str: string to use.
 */

void puts_half(char *str)
{
	int length, j, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	j = (length - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
