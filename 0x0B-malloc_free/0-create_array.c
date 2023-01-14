#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - check for uppercase
 * Return: 1 for uppercase and 0 for lowercase
 * @size: positive integer
 * @c: charcters
*/

char *create_array(unsigned int size, char c)
{
char *array = malloc(size * sizeof(char));
unsigned int i;
if (size == 0)
return (NULL);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
