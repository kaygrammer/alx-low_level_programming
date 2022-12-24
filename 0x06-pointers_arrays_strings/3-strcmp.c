#include "main.h"


/**
** _strcmp - string concat
*
* @s1: first item to compare
* @s2: second item to compare
*
* Return: (*s1 - *s2).
*
*/


int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
