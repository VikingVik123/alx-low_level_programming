#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares 2 strings and returns 1 if strings are identical,
 * otherwise return 0.
 * @s1: normal string
 * @s2: special string containing "*"
 * Return: 1 if identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}