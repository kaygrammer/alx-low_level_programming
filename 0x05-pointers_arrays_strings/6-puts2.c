#include <stdio.h>

/**
 * puts2 - check the code
 *
 * @str: input
 *
 * Return: Always n.
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}
