#include <stdio.h>
#include <string.h>

/**
 * _strcpy - check the code
 *
 * @dest: input
 * @src: input
 *
 * Return: Always n.
 */

char *_strcpy(char *dest, char *src)
{
int length = strlen(src);
int i;
for (i = 0; i <= length; i++)
{
dest[i] = src[i];
}
return (dest);
}
