#include "function_pointers.h"

/**
 * print_name - print function from a pointer
 *
 * @name: name
 * @f: f
 * Return: void.
 */


void print_name(char *name, void (*f)(char *))
{
f(name);
}
