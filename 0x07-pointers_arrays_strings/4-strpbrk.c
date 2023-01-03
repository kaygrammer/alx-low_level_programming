#include "main.h"
#include <string.h>

/* betty style doc for function _strpbrk goes there */
/**
 * _strpbrk - _strpbrk function(strchr() searches a
 * string for any of a set of bytes.
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that works similar to strspn function
 * @s: string to be searched
 * @accept: string to be searched
 * Return: Always ret (Success)
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (strchr(accept, *s))
{
return ((char *)s);
}
s++;
}
return (NULL);
}
