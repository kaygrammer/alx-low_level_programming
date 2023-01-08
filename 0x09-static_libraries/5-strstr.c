#include "main.h"
#include <string.h>

/* betty style doc for function _strstr goes there */
/**
 * _strstr - _strstr function  locates a substring.
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that works similar to strpbrk function
 * @haystack: string to be searched
 * @needle: the first occurrence of the string pointed to by needle
 * Return: Always haystack or null (Success)
 */


char *_strstr(char *haystack, char *needle)
{
size_t needle_len = strlen(needle);
while (*haystack)
{
if (!strncmp(haystack, needle, needle_len))
{
return ((char *)haystack);
}
haystack++;
}
return (NULL);
}
