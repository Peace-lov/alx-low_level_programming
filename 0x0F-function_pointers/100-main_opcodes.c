#include "3-calc.h"
/**
 * main - program that prints the opcodes of its own function
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte;
	int a;
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

	for (a = 0; a < byte; a++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (a == byte - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
