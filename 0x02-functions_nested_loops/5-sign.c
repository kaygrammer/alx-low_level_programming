#include "main.h"

/**
 * print_sign - check for lower case.
 *
 * @n : the character to check
 *
 * Return: 1 if it's lower && 0 if it's not.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
