#include "main.h"
/**
 *  islower - int function(int c)
 *  Description: checks for lowercase character
 *	@c: is the character will be checked
 *	Return: 1 if lower case, otherwise 0
 *      by a.shazally.
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
