#include "main.h"
/**
 * print_rev - print in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
int i = 0, j;

while (s[j++])
	i++;
for (j = i - 1; j >= 0; j--)
	_putchar(s[j]);
_putchar('\n');
}
