#include "main.h"

/**
 * _pow - function calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - number in binary notation
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char c;

	c = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
