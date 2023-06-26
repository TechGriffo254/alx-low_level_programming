#include "main.h"

/**
 * _strlen - a function that returns
 * the length
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int j;
	int length = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		length++;
	}
	return (length);
}
