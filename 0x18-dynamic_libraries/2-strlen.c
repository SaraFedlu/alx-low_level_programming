#include "main.h"
/**
 * _strlen - compute length of string
 * @s: pointer
 * Return: length of string
 */
int _strlen(char *s)
{
int c = 0;

while (*s++)
{
c++;
}
return (c);
}
