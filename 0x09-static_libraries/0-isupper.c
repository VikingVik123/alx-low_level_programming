#include "main.h"
/**
*_isupper - check for uppercase
*@c : character to check
*Return: 1 if successful 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
