#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - strcpy
 * Return: 1 for uppercase and 0 for lowercase
 * @str: positive integer
*/

char *_strdup(char *str)
{
size_t length = strlen(str) + 1;
char *copy = malloc(length * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (copy == NULL)
return (NULL);
memcpy(copy, str, length);
return (copy);
}
