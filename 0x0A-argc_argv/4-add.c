#include <stdio.h>
#include <stdlib.h>
/**
 * main - print  all the arguments passed to it
 * @argc: the argument
 * @argv: pointer to the arguments
 */
int main (int argc, char *argv[])
{
int add = 0, i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("error\n");
return (0);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return 0;
}
