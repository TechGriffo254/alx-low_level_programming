#include "main.h"

/**
 * *_strspn - get the length of a prefix substrin
 * @s: string to be evaluated
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segments
 * of s which consist only of bytes from accepted
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
