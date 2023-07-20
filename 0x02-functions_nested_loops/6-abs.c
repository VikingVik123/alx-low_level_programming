#include "main.h"
/**
*_abs - Entry point
*Description: Prints sign of numbers
*@i: int value to check
*Return: 0 success
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
