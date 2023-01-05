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
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
