#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int cur;
	unsigned long int exclu = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exclu >> i;
		if (cur & 1)
			countbit++;
	}

	return (countbit);
}
