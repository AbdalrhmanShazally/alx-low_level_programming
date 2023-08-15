#include "main.h"
/**
 *	print_sign - Entry Point
 *  Description: print_sign fucntion checks for Number Sign
 *      @n: is the number that will be checked
 *      Return: 1 if number > 0,0 if equal zero,-1 if number <0
 *      by a.shazally.
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
