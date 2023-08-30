#include "main.h"

int _prime_helper(int n, int i);

/**
 * is_prime_number - check input prime or not.
 * @n: number.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (_prime_helper(n, n - 1));
}

/**
 * _prime_helper -   find prime.
 * @n: number.
 * @i: iterator.
 *
 * Return: sqrt
 */

int _prime_helper(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (_prime_helper(n, i - 1));
}
