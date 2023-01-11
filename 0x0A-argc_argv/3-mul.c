#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * Return: 1 for uppercase and 0 for lowercase
 * @argc: int input
 * @argv: char input
*/

int main(int argc, char *argv[])
{
int n1 = 0, n2 = 0;
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n2 *n1);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
