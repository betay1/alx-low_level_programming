#include "main.h"

/**
 * _puts - progran entry point of the program
 * @str: the string to be printed
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
