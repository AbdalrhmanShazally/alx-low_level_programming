#include "main.h"

/**
* _strncat - concatenates two strings.
* copies the string pointed to by src.
* @dest: copy to string
* @src: string copying from
* Return: String
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;


	while (*dest_end != '\0')
	{
	dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
	*dest_end = *src;
	dest_end++;
	src++;
	n--;
	}
	*dest_end = '\0';

	return (dest);
}
