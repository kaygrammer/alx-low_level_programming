#include "main.h"

/**
** _strncpy - string concat
*
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: number of elements to copy in src
* Return: dest.
*
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
