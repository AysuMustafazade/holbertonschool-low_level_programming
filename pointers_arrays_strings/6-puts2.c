#include "main.h"
#include <unistd.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	write(1, "\n", 1);
}
