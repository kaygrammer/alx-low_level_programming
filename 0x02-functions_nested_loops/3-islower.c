#include "main.h"
#include <ctype.h>

/**
 * _islower - check for lower case.
 * 
 * @c : the character to check
 *
 * Return: 1 if it's lower && 0 if it's not.
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
