#include "main.h"

/**
* _strncpy - copies a string
* @dest: copy to string
* @src: string copying from
* @n: the index to start from
* Return: String
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
