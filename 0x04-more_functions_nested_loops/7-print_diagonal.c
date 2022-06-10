#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: length of the line
 * Return: (0)
 */
void print_diagonal(int n)
{
int j, i;
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
if (j == n - 1)
	continue;
_putchar('\n');
}
_putchar('\n');
}
