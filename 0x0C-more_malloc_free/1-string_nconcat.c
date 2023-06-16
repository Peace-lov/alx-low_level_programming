#include "main.h"
/**
 * string_nconcat - function that concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int b = 0, a = 0, i;

	if (s1 == NULL || s2 == NULL)
		s1 = "", s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		while (s2[b] != '\0')
			b++;
	}
	if (n < b)
		string = malloc(sizeof(char) * (i + n + 1));
	else
		string = malloc(sizeof(char) * (i + b + 1));
	if (string == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
	{
		string[a] = s1[a];
	}
	while (n < b && a < (i + n))
		string[a++] = s2[b++];
	while (n >= b && a < (i + b))
		string[a++] = s2[b++];
	string[a] = '\0';
	return (string);
}
