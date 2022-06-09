#include "main.h"
/**
 * times_table - multiplication
 * Return: void
 */
void times_table(void)
{
int i, j, k;
i = 0;
while (i < 10)
{
_putchar('0');
j = 1;
while (j < 10)
{
_putchar(',');
_putchar(' ');
k = i *j;
if (k < 10)
	_putchar(' ');
else
	_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
j++;
}
_putchar('\n');
i++;
}
}
