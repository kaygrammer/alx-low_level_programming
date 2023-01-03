#include "main.h"

/* betty style doc for function _memset goes there */
/**
 * _memcpy - memset function(memset() is used to copy data
 * from one block of memory to another.)
 * resources - geeksforgeeks.org, coldvault youtube cahannel.
 * Description: 'the program that works similar to memcpy function
 * for filling a block of memory with a particular value'
 * @dest: destination memory
 * @src: source o data to be copied
 * @n: number of assign byte
 * Return: Always s (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;
while (n--)
{
*d++ = *s++;
}
return (dest);
}
