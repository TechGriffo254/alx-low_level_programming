#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @src: chaîne à copier
 * @dest: destination de la chaîne.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int j;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
