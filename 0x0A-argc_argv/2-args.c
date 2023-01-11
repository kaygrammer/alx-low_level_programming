#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * Return: 1 for uppercase and 0 for lowercase
 * @argc: int input
 * @argv: char input
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
