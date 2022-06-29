#include <stdio.h>
/**
 * main - print the argument passed to it
 * @argc: the argument
 * @argv: pointer to the argument
 */
int main (int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);

return 0;
}
