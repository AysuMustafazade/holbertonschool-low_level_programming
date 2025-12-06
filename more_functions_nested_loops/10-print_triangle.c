#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}

		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
}
