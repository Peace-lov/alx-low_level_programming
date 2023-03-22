#include "main.h"
#include <stdio.h>
/**
 * main - print alphabet in lowercase, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
