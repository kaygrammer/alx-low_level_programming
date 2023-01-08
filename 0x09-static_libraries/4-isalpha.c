#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for lower case.
 *
 * @c : the character to check
 *
 * Return: 1 if it's lower && 0 if it's not.
 */

int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
