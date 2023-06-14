#include "main.h"
/**
 * argstostr - function that concatenates all the arguements
 * @ac: argument count
 * @av: array of size
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int a, b, length = 0, cout = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			length++;
		}
	}
	length += ac;
	args = malloc((length + 1) * sizeof(char));
	if (args == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			args[cout] = av[a][b];
			cout++;
		}
		if (args[cout] == '\0')
			args[cout++] = '\n';
	}
	return (args);
}
