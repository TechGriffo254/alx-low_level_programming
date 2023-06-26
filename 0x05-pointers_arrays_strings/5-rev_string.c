#include "main.h"

/**
* rev_string -  function that reverses a string
*
*@s: the string to be reversed.
*/

void rev_string(char *s)
{
int length, k, i;
char v1, v2;

for (length = 0; s[length] != '\0'; length++)
{
}

k = length - 1;
i = 0;

while (k > i)
{
v1 = s[i];
v2 = s[k];
s[i] = v2;
s[k] = v1;
k--;
i++;
}
}
