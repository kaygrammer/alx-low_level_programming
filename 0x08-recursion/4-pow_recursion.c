#include "main.h"

/* betty style doc for 0x08-recursion goes there */
/**
 * _pow_recursion - _puts_recursion
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to puts"
 * @x: integer input
 * @y: integre input
 * Return: Always (Success)
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
