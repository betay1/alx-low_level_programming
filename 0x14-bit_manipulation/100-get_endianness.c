#include "main.h"

/**
 * get_endianness - program that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *l;

	i = 1;
	l = (char *)&i;
	return (*l);
}
