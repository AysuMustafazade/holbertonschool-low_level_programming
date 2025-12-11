#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    while (i>= 0)
    {
        write(1, &s[i], 1);
        i--;
    }
    write(1, "\n", 1);
}
