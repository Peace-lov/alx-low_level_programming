#include "3-calc.h"
/**
 * main - Performs simple operarions
 * @argc: argument count
 * @argv: array of characters
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int arg1;
	int arg2;
	char *opera;

	if (argc != 4)
	{
		printf("Erroe\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	opera = argv[2];
	arg2 = atoi(argv[3]);

	if (get_op_func(opera) == NULL || opera[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opera == '/' && arg2 == 0) || (*opera == '%' && arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opera)(arg1, arg2));
	return (0);
}
