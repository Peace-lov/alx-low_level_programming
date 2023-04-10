#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int cent;
	int num_coin;

	for (i = 0; i < 5; i++)
	{
		if (argc != 2)
		{
			cent = atoi(argv[1]);
			if (cent < 0)
			{
				printf("0\n");
				return (0);
			}
			printf("Error\n");
			return (1);
		}
		num_coin += cent /coins[i];
		cent %= coins[i];
	}

	printf("%d\n", num_coin);
	return (0);
}
