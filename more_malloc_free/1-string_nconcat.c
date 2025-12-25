#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: Pointer to newly allocated memory containing s1 followed
 *         by the first n bytes of s2, null-terminated
 *         If malloc fails, return NULL
 *         If s1 or s2 is NULL, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total_len;
	char *result;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n > len2)
		n = len2;

	total_len = len1 + n + 1;
	result = malloc(total_len);
	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
		memcpy(result, s1, len1);
	if (s2 != NULL)
		memcpy(result + len1, s2, n);

	result[len1 + n] = '\0';

	return (result);
}
