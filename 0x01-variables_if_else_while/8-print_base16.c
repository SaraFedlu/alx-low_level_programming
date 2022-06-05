#include <stdio.h>
/**
 * main - print lowercase alphabets
 *
 * Return: (0)
 */
int main(void)
{
int i = 0;
char j = 'a';
while (i < 10)
{
putchar(i + '0');
i++;
}
while (j <= 'f')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
