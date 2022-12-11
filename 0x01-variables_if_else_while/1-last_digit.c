#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
int abs_num;
int la;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

abs_num = abs(n);
la = abs_num % 10;
if (la > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, la);
else if (la == 0)
printf("Last digit of %d is %d and is 0\n", n, la);
else if (la < 6 && la != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la);
return (0);
}

