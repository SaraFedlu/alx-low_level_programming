#include "main.h"
/**
 * _puts - print string
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
