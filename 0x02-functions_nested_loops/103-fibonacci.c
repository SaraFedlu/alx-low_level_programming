#include <stdio.h>
/**
 * main - check the code
 * Return: (0)
 */
int main(void)
{
unsigned long i, j, s;
float sum;
i = 0;
j = 1;
while (1)
{
s = i + j;
if (s > 4000000)
	break;
if ((s % 2) == 0)
	sum += s;
i = j;
j = s;
}
printf("%.0f\n", sum);
return (0);
}
