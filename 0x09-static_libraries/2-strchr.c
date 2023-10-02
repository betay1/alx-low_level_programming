#include "main.h"

/**
 * _strchr - locate the first occurance of a character in the string.
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
