#include "main.h"
/**
* _isdigit - this checks for a digit (0-9)
* @c: it is an integer holding the character
*
* Return: 1(Digit) 0- (otherwise)
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

return (0);
}
