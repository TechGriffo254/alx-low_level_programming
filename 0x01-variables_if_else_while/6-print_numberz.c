#include <stdio.h>

/**
  * main - Prints the numbers from 0 to 9
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
