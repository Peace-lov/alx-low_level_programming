#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: array of size
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
	{
		printf("%s", argv[a]);
		printf("\n");
	}
	return (0);
}
