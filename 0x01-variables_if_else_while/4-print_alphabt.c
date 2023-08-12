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

	while (lowercase <= 'z')
{
	if (lowercase != 'e' && lowercase != 'q')
{
	putchar(lowercase);
}
	lowercase++;
}
	putchar('\n');
	return (0);
}
