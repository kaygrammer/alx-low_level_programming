#include "main.h"

/* betty style doc for 0x08-recursion goes there */
/**
 * _puts_recursion - _puts_recursion
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to puts"
 * @s: pointer to the starting address o the block memory
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
