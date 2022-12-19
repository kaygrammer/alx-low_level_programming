#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 *
 * @s: input
 *
 * Return: Always n.
 */

void rev_string(char *s)
{
int length = strlen(s);
int i;
for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
