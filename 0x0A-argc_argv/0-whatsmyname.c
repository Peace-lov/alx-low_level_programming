#include <stdio.h>
/**
 * main - Prints its name followed by a new line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
