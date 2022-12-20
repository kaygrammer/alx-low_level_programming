#include "main.h"
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
int j = 0;
while (str[j] != '\0')
{
j++;
}

for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
