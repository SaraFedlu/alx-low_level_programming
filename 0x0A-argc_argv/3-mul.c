#include <stdio.h>
#include <stdlib.h>
/**
 * main - print  all the arguments passed to it
 * @argc: the argument
 * @argv: pointer to the arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int mul;

if (argc != 3)
{
printf("error\n");
return (1);
}

mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);

return (0);
}
