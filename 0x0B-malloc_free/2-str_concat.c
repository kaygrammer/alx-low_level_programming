#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - strcpy
 * Return: two concatinated strings
 * @s1: first string
 * @s2: second string
*/

char *str_concat(char *s1, char *s2)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = malloc(len1 + len2 + 1);  /** +1 for the null terminator */
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (result == NULL)
{
return (NULL);
}
memcpy(result, s1, len1);
memcpy(result + len1, s2, len2 + 1);  /* +1 to include the null terminator */
return (result);
}
