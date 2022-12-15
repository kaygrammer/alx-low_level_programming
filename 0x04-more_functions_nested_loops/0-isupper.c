#include <ctype.h>
#include "main.h"

/**
 * _isupper - check for uppercase
 * Return: 1 for uppercase and 0 for lowercase
 * @c: int input
*/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
