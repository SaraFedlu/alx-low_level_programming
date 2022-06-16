#include "main.h"

/**
 * cap_string - capitalize the string
 * @str: pointer
 * Return: char
 */

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] == ' ' ||
 str[i] == '\t' ||
 str[i] == '\n' ||
 str[i] == ',' ||
 str[i] == ';' ||
 str[i] == '.' ||
 str[i] == '?' ||
 str[i] == '!' ||
 str[i] == '(' ||
 str[i] == '"' ||
 str[i] == ')' ||
 str[i] == '{' ||
 str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	str[i + 1] -= 32;
}

if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
	str[i] -= 32;

i++;
}
return (str);
}
