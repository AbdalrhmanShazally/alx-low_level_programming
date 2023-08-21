#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: the String to be printed
* Return: void
*/

void print_rev(char *s)
{
	int string_length = 0;
	int i;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}
	s--;
	for (i = string_length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
