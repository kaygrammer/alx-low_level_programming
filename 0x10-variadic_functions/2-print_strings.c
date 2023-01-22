#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print set of string
 *
 * @separator: string sepaparator
 * @n: positive int
 * Return: STRING.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
else
{
printf("%s", str);
}
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
