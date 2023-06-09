#include <stdio.h>
/**
 * main - Print the number of arguement passed to it
 * @argc: arguement count
 * @argv: array of size
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
