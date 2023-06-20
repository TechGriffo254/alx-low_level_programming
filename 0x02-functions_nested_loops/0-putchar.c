#include "main.h"
/**
 * main - will print _putchar, followed by new line 
 * Return: 0 (Success), 1 (failure)
 */
int main(void)
{
	char grif[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(grif[c]);
	}
	_putchar('\n');
	return (0);
}
