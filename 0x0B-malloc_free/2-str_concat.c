#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *str1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
		len1++;
	}
	str1 = malloc((len1 + len2 + 1) * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		str1[len1] = s1[len1];
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		str1[len1] = s2[len2];
		len1++;
	}
	str1[len1] = '\0';
	return (str1);
}
