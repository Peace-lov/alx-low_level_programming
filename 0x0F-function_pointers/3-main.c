#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int var1;
	int var2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	var1 = atoi(argv[1]);
	op = argv[2];
	var2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && var2 == 0) ||
		(*op == '%' && var2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(var1, var2));

	return (0);
}
