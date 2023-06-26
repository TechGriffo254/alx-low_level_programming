#include "main.h"

/**
* _atoi - convert a string to integer.
*
* @s: the string to use.
*
* Return: integer.
*/

int _atoi(char *s)
{
int sign = 1, j = 0;
unsigned int res = 0;

while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
{
if (s[j] == '-')
sign *= -1;
j++;
}
while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
{
res = (res * 10) + (s[j] - '0');
j++;
}
res *= sign;
return (res);
}
