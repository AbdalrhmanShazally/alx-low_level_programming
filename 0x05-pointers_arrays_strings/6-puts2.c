#include "main.h"
#include <string.h>

/**
* puts2 - prints any other string, followed by a new line
* @str: the String to be printed
* Return: void
*/

void puts2(char *str)
{
	int length = strlen(str);
	int i = 0;

	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
