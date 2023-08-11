#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  * main - Entry point
*  Description:assign a random number to the variable n
*
*	The output of the program should be:
*	The number, followed by
*	greater than 5: Print Number and is greater than 5
*	if the number is 0: is 0
*	if the number is less than 6:is less than 6 and not 0
 *  Return: Always 0 (Success)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	if (lastDigit > 5 )
	{
	printf("Last digit of %d is %d and is greater than 5\n ", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n ", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0 ", n, lastDigit);
	return (0);
}
