#include "variadic_functions.h"
/**
 * sum_them_all - sums variable number of arguments
 * @n: number of arguments to be summed
 * @...: variable number of arguments
 * Return: (0)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list v;
unsigned int i, sum = 0;

va_start(v, n);
for (i = 0; i < n; i++)
	sum += va_arg(v, int);

va_end(v);
return (sum);
}
