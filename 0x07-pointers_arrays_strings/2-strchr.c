#include "main.h"
#include <stddef.h>


/* betty style doc for function _memset goes there */
/**
 * _strchr - strchr function(strchr() is used to find the
 * occurance of a character of a string
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that works similar to strchr function
 * @s: array/function
 * @c: chracter to ind in the string
 * Return: Always s (Success)
 */


char *_strchr(char *s, char c)
{
while (*s != (char)c)
{
if (*s++ == '\0')
{
return (NULL);
}
}
return ((char *)s);
}
