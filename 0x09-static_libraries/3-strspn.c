#include "main.h"
#include "string.h"

/* betty style doc for function strspn goes there */
/**
 * _strspn - strspn function(strchr() is used to gets the
 * length of a prefix substring.
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that works similar to strspn function
 * @s: string to be searched
 * @accept: string to be searched
 * Return: Always ret (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
size_t ret = 0;
while (*s && strchr(accept, *s++))
ret++;
return (ret);
}
