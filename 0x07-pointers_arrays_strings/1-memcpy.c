#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: to memory area
 * @src: from memory area
 * @n: constant integer number of bytes
 * Return: pointer to memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i > j; i++)
	{
	dest[i] = src[j];
	n--;
	}
	return (dest);
}
