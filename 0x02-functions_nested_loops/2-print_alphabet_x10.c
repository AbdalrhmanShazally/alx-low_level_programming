#include "main.h"
/**
 *  * print_alphabet_x10 - void function
 *  Description: print all alphabet lowercase 10 times
 *      by a.shazally.
**/
void print_alphabet_x10(void)
{
	int num;
	for (num = 0; num <= 9; num++)
{
	char lowercase = 'a';
	while (lowercase <= 'z')
{
	_putchar(lowercase);
	lowercase++;
}
	_putchar('\n');
}
}
