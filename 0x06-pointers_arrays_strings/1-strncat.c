#include "main.h"

/**
 * _strncat - appends n element of one string on another
 * @src: source string
 * @dest: destination string
 * @n:  no. of appended elements
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int len = 0;

while (dest[i++])
	len++;

for (i = 0; i < n && src[i]; i++)
{

dest[len] = src[i];
len++;
}

dest[len] = '\0';

return (dest);
}
