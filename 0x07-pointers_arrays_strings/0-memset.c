#include "main.h"

/* betty style doc for function _memset goes there */
/**
 * _memset - memset function(memset() is used to fill a block
 * of memory with a particular value.)
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to memset function
 * for filling a block of memory with a particular value'
 * @s: pointer to the starting address o the block memory
 * @b: a char value c representing the value to be set
 * @n: number of assign byte
 * Return: Always s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned char *p = (unsigned char *)s;
while (n--)
{
*p++ = (unsigned char)b;
}
return (s);
}
