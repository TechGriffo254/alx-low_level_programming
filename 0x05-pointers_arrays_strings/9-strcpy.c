#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int j, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (j = 0; j <= length ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
