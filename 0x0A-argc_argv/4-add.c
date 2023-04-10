#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		char *str;
		int num = (int)strtol(argv[i], &str, 10);

		if (*str)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
