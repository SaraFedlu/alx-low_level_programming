#include "main.h"
/**
 * _abs - compute abs
 * @n: number being checked
 * Return: (0)
 */
int _abs(int n)
{
if (n < 0)
	n = n * (-1);
putchar(n + '0');
return (0);
}
