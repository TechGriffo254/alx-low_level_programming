#include "main.h"

/**
 * *_memcpy - copy the memory area
 * @dest: destinationof the memory area
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j< n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
