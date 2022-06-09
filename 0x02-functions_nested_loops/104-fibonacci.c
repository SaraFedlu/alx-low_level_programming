#include <stdio.h>
/**
 * main - check the code
 * Return: (0)
 */
int main(void)
{
int c;
unsigned long i = 0, j = 1, s;
unsigned long h11, h12, h22, h21;
unsigned long h1, h2;
for (c = 0; c < 92; c++)
{
s = i + j;
printf("%lu, ", s);
i = j;
j = s;
}
h11 = i / 10000000000;
h21 = j / 10000000000;
h12 = i % 10000000000;
h22 = j % 10000000000;
for (c = 93; c < 99; c++)
{
h1 = h11 + h21;
h2 = h12 + h22;
if (h12 + h22 > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (c != 98)
	printf(", ");
h11 = h21;
h12 = h22;
h21 = h1;
h22 = h2;
}
printf("\n");
return (0);
}
