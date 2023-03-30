#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @g: pointer
 *
 * Return: g
 */
char *string_toupper(char *g)
{
	int i;

	i = 0;
	while (g[i] != '\0')
	{
		if (g[i] >= 'a' && g[i] <= 'z')
			g[i] = g[i] - 32;
	i++;
	}
	return (g);
}
