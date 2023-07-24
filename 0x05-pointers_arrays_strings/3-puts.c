#include "main.h"
/** _puts - inserts char
 * str : character to be inserted
 * return: char if successful
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
