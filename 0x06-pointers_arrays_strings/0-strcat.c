#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int len = 0;

while (dest[i++])
	len++;

for (i = 0; src[i]; i++)
{
dest[len] = src[i];
len++;
}

dest[len] = '\0';

return (dest);
}
