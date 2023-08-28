#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string address
 * @b: constant char
 * @n: constant integer number of bytes
 * Return: pointer to memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
