#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  * main - Entry point
*  Description:Print alphabet
*	In Lower/Upper Case and followed by new line
 *  Return: Always 0 (Success)
**/
int main(void)
{
	char lowercase = 'z';

do {
	putchar(lowercase);
	lowercase--;
} while (lowercase >= 'a');
	putchar('\n');
	return (0);
}
