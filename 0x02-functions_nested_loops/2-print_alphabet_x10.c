#include "main.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c;
int d;
for (d = 1; d <= 10; d++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
_putchar('\n');
}
