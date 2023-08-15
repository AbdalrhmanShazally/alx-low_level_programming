#include <unistd.h>
#include "main.h"
/**
 *  * _putchar - Entry point
 *  Description: 0. _putchar
 *	@c: the CHARACTER to be printed.
 *  Return: Always 1 (Success)
 *	On Error, -1 and error message.
**/
int _putchar(char c)
{
return (write(1, &c, 1));
}
