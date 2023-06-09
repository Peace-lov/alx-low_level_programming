#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * followed by a new line
 * @argc: arguement count
 * @argv: array of size
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	printf("Error\n");
	return (1);
}
