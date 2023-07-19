#include "main.h"
/**
*_islower - Entry point
*Description: Checks for lower case
*@c:integer parameter
* Return: Always 0 if successful
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
