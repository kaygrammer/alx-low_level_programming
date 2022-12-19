#include <stdio.h>

/**
 * print_array - check the code
 *
 * @a: input
 * @n: input
 *
 * Return: Always n.
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
printf("\n");
}
