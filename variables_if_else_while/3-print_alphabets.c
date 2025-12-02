#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
