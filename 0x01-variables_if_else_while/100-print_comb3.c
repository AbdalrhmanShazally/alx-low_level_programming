#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  * main - Entry point
*  Description: all possible combinations of
*	two digits
*	Return: Always 0 (Success)
**/
int main(void)
{
	int num, num2;

for (num = 0; num <= 9; num++)
{
	for (num2 = 0; num2 <= 9; num2++)
	{
		if (num2 > num)
			{
				putchar('0' + num);
				putchar('0' + num2);
				if (num != 9 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
					
				}
			}
	}
}
	putchar('\n');
	return (0);
}
