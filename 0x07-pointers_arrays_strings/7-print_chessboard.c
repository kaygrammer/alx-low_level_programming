#include "main.h"

/* betty style doc for function print_chessboard goes there */
/**
 * print_chessboard - cheeseboard
 * resources - geeksforgeeks.org, coldvault youtube channel,
 * portfolio course youtube channel.
 * Description: 'the program that prints the cheese board
 * @a: input char
 * Return: Always (Success)
 */



void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
_putchar(a[i][n]);
_putchar('\n');
}
}
