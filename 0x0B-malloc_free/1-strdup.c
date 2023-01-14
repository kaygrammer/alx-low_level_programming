#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - strcpy
 * Return: 1 for uppercase and 0 for lowercase
 * @str: positive integer
*/

char *_strdup(char *str)
{
int length = strlen(str) + 1;
char *copy = malloc(length * sizeof(char));
if (copy == NULL)
return (NULL);
strcpy(copy, str);
return (copy);
}
