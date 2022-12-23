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
strncat(dest, src, n);
return (dest);
}
