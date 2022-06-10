#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * main - testing if n is positive or negative
 * Return: 0
 */

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
/* your code goes there */
if (i > 0)
{
printf("%d", i);
printf(" is positive\n");
}
else if (i == 0)
{
printf("%d", i);
printf(" is zero\n");
}
else
{
printf("%d", i);
printf(" is negative\n");
}
}
