#include "main.h"

/**
 * _strcat - concatenates the two strings
 * @dest: string to append to destinate
 * @src: string to be added
 *
 * Return: a pointer resulting strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
