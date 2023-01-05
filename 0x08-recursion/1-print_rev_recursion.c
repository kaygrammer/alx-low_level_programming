#include "main.h"

/* betty style doc for 0x08-recursion goes there */
/**
 * _print_rev_recursion - _puts_recursion
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to puts"
 * @s: pointer to the starting address o the block memory
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
