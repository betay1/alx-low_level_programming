#include "main.h"

/**
 * _strncpy - copy a string, up to a maximum of n characters.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the maximum number of characters to copy.
 *
 * Return: destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
