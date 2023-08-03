#include "main.h"

/**
 * _pow_recursion(int x, int y) - outputs x ** y
 * @x : integer variable
 * @y : integer variable
 * Return: x multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
