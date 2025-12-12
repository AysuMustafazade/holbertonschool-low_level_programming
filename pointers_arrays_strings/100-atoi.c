#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	int num = 0;
	int started = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (!started && (s[i] == '-' || s[i] == '+'))
		{
			if (s[i] == '-')
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			if (sign == 1)
			{
				if (num < (INT_MIN + digit) / 10)
					return (INT_MAX);

				num = num * 10 - digit;
			}
			else
			{
				if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit > 8))
					return (INT_MIN);

				num = num * 10 - digit;
			}
		}
		else if (started)
			break;

		i++;
	}

	if (sign == 1)
		return (-num);

	return (num);
}
