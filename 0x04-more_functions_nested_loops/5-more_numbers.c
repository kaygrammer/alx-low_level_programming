#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always c.
 */

void more_numbers(void)
{
int c;
int d;
for (d = 0; d < 10; d++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
