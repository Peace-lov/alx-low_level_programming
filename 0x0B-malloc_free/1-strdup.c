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
	int j, count, len = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		len = j + 1;
	}
	len = j;
	str1 = malloc((len * sizeof(char)) + 1);

	if (str1 == NULL )
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	{
		str1[count] = str[count];
	}
	str1[count] = '\0';
	return (str1);
}
