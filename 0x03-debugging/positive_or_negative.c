#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */
/**
 *  * main - Entry point
 *  Description:assign a random number to the variable n
 *
 *      The output of the program should be:
*       The number, followed by
*       if the number is greater than 0: is positive
*       if the number is 0: is zero
*       if the number is less than 0: is negative
 *  Return: Always 0 (Success)
**/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
printf("%d is negative\n", i);
}
