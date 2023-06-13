#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: pointer to the string
 *
 * Return: new pointer
 */
char *_strdup(char *str)
{
	char *str1;
	int j, len = 0, count = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		len = j + 1;
	}
	len = j;
	str1 = malloc(sizeof(char) * (len + 1));
	if (str1 == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	{
		str1[count] = str[count];
	}
	str1[count] = '\0';
	return (str1);
}
