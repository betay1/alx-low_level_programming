#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 * Return: unsigned int, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
			return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		num <<= 1;
		if (b[u] == '1')
			num += 1;
	}
	return (num);
}

