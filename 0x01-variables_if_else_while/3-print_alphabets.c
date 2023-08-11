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
	char lowercase = 'a';
	char uppercase = 'A';

    while (lowercase <= 'z')
{
    putchar(lowercase);
    lowercase++;
}

    while (uppercase <= 'Z')
{
    putchar(uppercase);
    uppercase++;
}
    putchar('\n');
	return (0);
}
