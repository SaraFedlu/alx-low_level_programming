#include <stdio.h>
/**
 * main - check the code
 * Return: (0)
 */
int main(void)
{
int k;
unsigned long i, j, s;
i = 0;
j = 1;
k = 0;
while (k < 50)
{
s = i + j;
printf("%lu", s);
i = j;
j = s;
if (k == 49)
	printf("\n");
else
	printf(", ");
k++;
}
return (0);
}
