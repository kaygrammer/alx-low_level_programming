#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: input
 *
 * Return: Always n.
 */

void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
printf("%c", s[i]);

printf("\n");
}
