#include "main.h"
#include <string.h>

/**
* print_array - prints n elements of an array of integers.
* @a: array of integers
* @n: number of integer to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
