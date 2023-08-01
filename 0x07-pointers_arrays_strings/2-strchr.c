#include "main.h"
/**
 *_strchr - function to locate char in string
 *@s:string to search
 *@c:char to locate
 *return: 0 if successful
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
