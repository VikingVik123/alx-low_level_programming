#nclude "main.h"
/**
*_strlen - Checks string length
*@s : string
*Return: longi
*/
int _strlen(char *s)
{
	int longi = 0;

	while (s != 0 '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
