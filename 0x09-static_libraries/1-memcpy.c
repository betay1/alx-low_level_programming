#include "main.h"
/**
 *_memcpy - copies a specified number of bytes from source to destination
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes to be copied
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;
 
	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
