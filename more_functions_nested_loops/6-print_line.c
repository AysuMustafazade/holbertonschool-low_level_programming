#include "main.h"

/**
 * print_line - draws a straight line using '_'
 * @n: number of times to print '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
