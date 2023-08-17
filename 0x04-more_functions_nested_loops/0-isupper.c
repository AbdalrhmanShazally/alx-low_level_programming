#include "main.h"

/**
* _isupper - check for uppercase letters
* @c: Letter to be checked
* Return: 0 / 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
