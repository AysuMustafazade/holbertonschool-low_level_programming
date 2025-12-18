#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc , char *argv[] __attribute__((unused)))
{
	int a, b;

	if (argc < 2)
{
	printf("Error");
    return (1);
}   if (argc == 2)
{
    printf("%d\n", a*b);
    return (0);
}
    return(0);
}
