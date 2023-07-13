#include <stdlib.h>
/**
* malloc_checked - allocates mem using malloc.
* @b: size of mem to be allocated.
*
* Return: pointer to allocated mem
*/
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
