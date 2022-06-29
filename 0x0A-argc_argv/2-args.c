#include <stdio.h>
/**
 * main - print  all the arguments passed to it
 * @argc: the argument
 * @argv: pointer to the arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}
