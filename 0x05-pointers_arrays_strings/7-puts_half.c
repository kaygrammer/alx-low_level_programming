#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code
 *
 * @str: input
 *
 * Return: Always n.
 */


void puts_half(char *str)
{
int length = strlen(str);
int i;
for (i = length / 2; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
