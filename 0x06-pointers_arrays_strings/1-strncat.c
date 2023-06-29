#include "main.h"
#include <string.h>

/**
* _strncat - a function that concatenates two strings.
* @src: chaîne à copier
* @dest: destination de la chaîne.
* @n: the number.
* Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
int i = 0;

while (i < n && *src)
{
dest[index + i] = *src;
src++;
i++;
}
dest[index + i] = '\0';
return (dest);
}
