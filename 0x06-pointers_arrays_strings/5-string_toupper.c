#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 *
 * Return: n.
 */
char *string_toupper(char *n)
{
	int counter;

	counter = 0;
	while (n[counter] != '\0')
	{
	if (n[counter] >= 'a' && n[counter] <= 'z')
	n[counter] = n[counter] - 32;
	counter++;
	}
	return (n);
}
