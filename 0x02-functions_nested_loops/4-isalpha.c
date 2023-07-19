#include "main.h"
/**
*_isalpha - check the code.
*@c:Integer character
*Description: Checks for alphabet
* Return: Always 0 if successful
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
