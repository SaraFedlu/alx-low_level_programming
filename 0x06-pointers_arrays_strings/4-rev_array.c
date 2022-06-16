#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pointer
 * @n: length of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0, j, temp;

for (j = n - 1; j >= n / 2; j--)
{
temp = a[i];
a[i++] = a[j];
a[j] = temp;
}
}
