#include "main.h"
/**
 *      print_last_digit - Entry Point
 *  Description: print_last_digit fucntion print last digit
 *      @n: is the number that will be checked
 *      Return: 1if number > 0,0 if equal zero,-1 if number < 0
 *      by a.shazally.
**/
int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return(a);
}
