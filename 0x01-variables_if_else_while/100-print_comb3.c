#include <stdio.h>
/**
 * main - print
 *
 * Return: (0)
 */
int main(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
j = i + 1;
while ((j % 10) < 10 && j <= 9)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
