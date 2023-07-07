#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates character in a string
 * @s: string to search
 * @c: char to be find
 *
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
		int k;

		while (1)
		{
			k = *s++;
			if (k == c)
			{
				return (s - 1);
			}
			if (k == 0)
			{
				return (NULL);
			}
		}
