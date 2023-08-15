#include "main.h"
/**
 * _isalpha - Entry Point
 *  Description: _isalpha fucntion checks for alphabetic character
 *      @c: is the character will be checked
 *      Return: 1 if alphabetic case, otherwise 0
 *      by a.shazally.
**/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
