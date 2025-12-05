#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j, product;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
