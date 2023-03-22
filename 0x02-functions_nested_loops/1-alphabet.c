#include "main.h"

/**
 * main - print alphabet in lowercase, followed by new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
