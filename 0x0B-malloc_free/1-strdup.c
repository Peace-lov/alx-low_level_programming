#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: the pointer
 *
 * Return: pointer on success
 */
char *_strdup(char *str)
{
	char *s;
	int k = 0, l = 0;

	if (!str)
		return (NULL);
	while (str[k] != '\0')
		k++;
	s = malloc(sizeof(char) * (k + 1));
	if (!s)
		return (NULL);
	while (str[l])
	{
		s[l] = str[l];
		l++;
	}
	return (s);
}
