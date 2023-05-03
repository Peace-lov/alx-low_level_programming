#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 *
 * Return: if fail, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, len_1 = 0, len_2 = 0;
	char *st;

	while (s1 && s1[len_1])
		len_1++;

	while (s2 && s2[len_2])
		len_2++;
	if (n < len_2)
	{
		st = malloc(sizeof(char) * (len_1 + n + 1));
	}
	else
	{
		st = malloc(sizeof(char) * (len_1 + len_2 + 1));
	}

	if (st == NULL)
		return (NULL);
	while (a < len_1)
	{
		st[a] = s1[a];
		a++;
	}
	while (n < len_2 && a < (len_1 + n))
	{
		st[a++] = s2[b++];
	}

	while (n >= len_2 && a < (len_1 + len_2))
	{
		st[a++] = s2[b++];
	}
	st[a] = '\0';
	return (st);
}
