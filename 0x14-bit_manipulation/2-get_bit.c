#include"main.h"

/**
 * get_bit - program returns the value of a bit
 * @n: number to check bits
 * @index: index to check bit
 *
 * Return: bit value, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
