#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocate mem of an array using malloc.
* @nmemb: number of elements in array.
* @size: size of elements of array.
*
* Return: NULL is the size or nmemb == 0.
* NULL if malloc fails.
* Pointer to mem allocated if successful.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}

for (i = 0; i < (nmemb * size); i++)
{
*((char *)(p) + i) = 0;
}

return (p);
}
