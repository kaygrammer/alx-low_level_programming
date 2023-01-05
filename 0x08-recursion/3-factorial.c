 #include "main.h"

/* betty style doc for 0x08-recursion goes there */
/**
 * factorial - _puts_recursion
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to puts"
 * @n: integer input
 * Return: Always (Success)
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
