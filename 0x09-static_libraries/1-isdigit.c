#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for digits
 * Return: 1 for digits and 0 for otherwise
 * @c: int input
*/

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
