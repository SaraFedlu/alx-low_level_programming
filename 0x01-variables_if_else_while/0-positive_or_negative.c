#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - testing if n is positive or negative
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d", n);
printf(" is positive\n");
}
else if (n == 0)
{
printf("%d", n);
printf(" is zero\n");
}
else
{
printf("%d", n);
printf(" is negative\n");
}
return (0);
}
