#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte;
	int i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == byte - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
