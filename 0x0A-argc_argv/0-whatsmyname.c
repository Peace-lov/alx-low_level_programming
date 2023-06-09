#include <stdio.h>
/**
 * main - Prints its name followed by a new line
 * @argc: arguement count
 * @argv: array of size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
