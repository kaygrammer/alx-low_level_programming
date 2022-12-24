#include "main.h"

/**
** string_toupper - reverse Array
*
* @str: item to convert to upper
*
*
* Return: capital letter string.
*
*/

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
