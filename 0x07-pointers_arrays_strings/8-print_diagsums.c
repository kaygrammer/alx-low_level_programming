#include <stdio.h>
#include "main.h"

/* betty style doc for function print_diagsums goes there */
/**
 * print_diagsums - print the diagonal of an array
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that prints the cheese board
 * @a: pointer to an integer array
 * @size: number of rows and column of the array
 * Return: Always (Success)
 */


void print_diagsums(int *a, int size)
{
int i, n, sum1 = 0, sum2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + a[n];
printf("%d, %d\n", sum1, sum2);
}
