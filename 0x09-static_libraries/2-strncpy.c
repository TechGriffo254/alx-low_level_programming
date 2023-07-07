#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of bytes copy
 *
 * Return: pointer to the resulting strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
