#include "main.h"

/**
* _strcat - concatenates two strings.
* copies the string pointed to by src.
* @dest: copy to string
* @src: string copying from
* Return: String
*/

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
	dest_end++;
	}
	while (*src != '\0')
	{
	*dest_end = *src;
	dest_end++;
	src++;
	}
	*dest_end = '\0';

	return (dest);
}
