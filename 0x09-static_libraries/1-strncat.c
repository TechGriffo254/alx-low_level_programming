#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, k;

	l = 0;
	k = 0;

	while (dest[l] != '\0')
		l++;

	while (src[k] != '\0' && k < n)
	{
		dest[l] = src[k];
		l++;
		k++;
	}

	dest[l] = '\0';

	return (dest);
}
