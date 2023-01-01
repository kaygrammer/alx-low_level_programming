#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
for (c = 0; c <= 15; c++)
if (c < 10)
{
putchar('0' + c);
}
else
{
putchar('a' + c - 10);
}
putchar('\n');
return (0);
}
