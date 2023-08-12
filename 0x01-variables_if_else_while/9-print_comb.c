#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  * main - Entry point
*  Description: all possible combinations of
*	single-digit numbers
*	Return: Always 0 (Success)
**/
int main(void)
{
	int num;

for (num = 0; num <= 9; num++)
{
	putchar('0' + num);
	if (num != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
