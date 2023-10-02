#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 *
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
		dest[a] = '\0';
	return (dest);
}
