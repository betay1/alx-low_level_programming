#include <stdio.h>

void myfirstfun(void) __attribute__ ((constructor));

/**
 * myfirstfun - prints a sentence ececuted before main
 * function is executed
 */
void myfirstfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
