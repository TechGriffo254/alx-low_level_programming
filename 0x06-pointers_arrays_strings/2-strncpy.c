#include "main.h"

/**
 * _strncpy -  function that copies a string..
 * @src: chaîne à copier
 * @dest: destination of the string
 * @n: number.
 * Return: void/none
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
