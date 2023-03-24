#include <stdio.h>

/**
 * main - causes an infinite loop
 * Purpose - printf("Infinite loop incoming :(\n");
 * printf("Infinite loop avoided! \\o/\n");
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
