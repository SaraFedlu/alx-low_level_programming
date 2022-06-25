#include "main.h"

/**
 * _strncpy - copies n element of one string on another
 * @src: source string
 * @dest: destination string
 * @n:  no. of copied elements
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i = 0;
int len = 0;

while (src[i++])
	len++;

for (i = 0; i < n && src[i]; i++)
	dest[i] = src[i];

for (i = len; i < n; i++)
	dest[i] = '\0';

return (dest);
}
