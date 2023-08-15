#include "main.h"
/**
 *  * print_alphabet - void function
 *  Description: print all alphabet lowercase
 *	by a.shazally.
**/
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
{
	_putchar(lowercase);
	lowercase++;
}
	_putchar('\n');
}
