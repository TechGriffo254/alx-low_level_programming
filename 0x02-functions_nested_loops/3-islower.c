#include "main.h"

/**
* _islower - Checks for lowercase alphabets only
* @c: Character to be checked
* Return: 0 (otherwise), 1 (lowercase)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
