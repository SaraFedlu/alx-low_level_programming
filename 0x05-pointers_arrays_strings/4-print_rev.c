#include "main.h"
/**
 * print_rev - print in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)

{
int len = 0, index;

while (s[index++])
	len++;


for (index = - 1; index >= - len; index--)
	_putchar(s[index]);

_putchar('\n');

}
