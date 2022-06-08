#include "main.h"
/**
 * print_last_digit - print last digits
 * @n: number to be tested
 * Return: void
 */
int print_last_digit(int n)
{
int b = n % 10;
if (b < 0)
b *= -1;
_putchar(b + '0');
return (b);
}
