#include <stdio.h>

void Best(void) __attribute__((constructor));

/**
 * Best - Write a function that prints the input
 *
 * Return:0
 */
void Best(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
