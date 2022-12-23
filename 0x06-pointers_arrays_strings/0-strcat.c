#include "main.h"
#include <string.h>

/*
* char *_strcat(char *dest, char *src)
// {
// size_t dest_length = strlen(dest);
// size_t i;

// for (i = 0; src[i] != '\0'; i++)
// {
// dest[dest_length + i] = src[i];
// }
// dest[dest_length + i] = '\0';

// return (dest);
// }
*/


/**
 * _strcat - string concat
 *
 * @dest: input
 * @src: input
 *
 * Return: dest.
 */


char *_strcat(char *dest, char *src)
{
int dlen = 0, i;

while (dest[dlen])
{
dlen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}
