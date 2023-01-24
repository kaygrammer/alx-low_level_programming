#include "function_pointers.h"
#include <stddef.h>


/**
 * array_iterator - iterate throuhg an array
 *
 * @array: name
 * @size: f
 * @action: action
 * Return: void.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{action(array[i]);
i++;
}
}
}
