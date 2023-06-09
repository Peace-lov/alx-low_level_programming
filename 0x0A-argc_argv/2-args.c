#include <stdio.h>
/**
 * main - Prints all arguements it receives
 * @argc: arguement count
 * @argv: array of size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
