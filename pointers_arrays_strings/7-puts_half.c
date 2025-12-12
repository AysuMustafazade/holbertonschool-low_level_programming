#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string to process
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len] != '\0')
        len++;

    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
}
