#include "main.h"

/**
* _strlen -   length of a string
* @s: the String to calculate its length
* Return: void
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
