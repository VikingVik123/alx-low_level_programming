#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc:no of args
 *@argv:array of args
 *Return: name of program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
