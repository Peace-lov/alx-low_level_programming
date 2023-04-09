#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: argument count
 * @argv: array of size
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		if (argc == 0)
		{
			printf("Error\n");
		}

	}
	printf("%d\n", sum);
	return (0);
}
