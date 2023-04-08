#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * followed by a new line
 * @argc: argument count
 * @argv: array of size
 * Print Error if do not receive 2 arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int result = 1;

	if (argc == 3) 
	{
		for (i = 1; i < argc; i++) 
		{
			result = result * atoi(argv[i]);
		}
	printf("%d\n", result);
	return (0);
	}
	printf("Error\n");
	return (1);
}
