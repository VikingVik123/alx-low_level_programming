#include "main.h"
/**
 *_strchr - Entry point
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
