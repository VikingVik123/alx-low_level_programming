#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: pointer to name variable
 * @f:pointer
 * Return: char stored in pointer 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || *f)
		return;
	f(name);
}
