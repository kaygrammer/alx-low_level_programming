#include "main.h"
#include <string.h>

/**
** _strncat - string concat
*
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: number of elements to copy in src
* Return: dest.
*
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_length = strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_length + i] = src[i];
}
dest[dest_length + i] = '\0';
return (dest);
}
