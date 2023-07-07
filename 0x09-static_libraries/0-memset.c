#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area filled
 * @b: char to be copied
 * @n: number of the times to copy b
 *
 * Return: pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
