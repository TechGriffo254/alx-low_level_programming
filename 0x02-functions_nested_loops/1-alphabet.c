#include "main.h"

/**
 * print_alphabet - checks the code for ALX School students.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar (alpha);
		alpha++;
	}
	_putchar ('\n');
}
