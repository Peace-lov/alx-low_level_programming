#include "main.h"

#define ERR_MSG "Error"
/**
 * is_digit - check if a string has non- digit character
 * @s: the string
 *
 * Return: 0 if no digit, else 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
/**
 * error - handles errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiples of two positive numbs
 * @argc: num of argc
 * @argv: arrays of argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len_1, len_2, lon, cat, digit_1, digit_2, k = 0, b = 0, *r;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		error();
	len_1 = _strlen(str1), len_2 = _strlen(str2);
	lon = len_1 + len_2 + 1;
	r = malloc(sizeof(int) * lon);
	if (!r)
		return (1);
	for (; k <= len_1 + len_2; k++)
		r[k] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		digit_1 = str1[len_1] - '0';
		cat = 0;
		for (len_2 = _strlen(str2) - 1; len_2 >= 0; len_2--)
		{
			digit_2 = str2[len_2] - '0';
			cat += r[len_1 + len_2 + 1] + (digit_1 * digit_2);
			r[len_1 + len_2 + 1] = cat % 10;
			cat /= 10;
		}
		if (cat > 0)
			r[len_1 + len_2 + 1] += cat;
	}
	for (; k < lon - 1; k++)
	{
		if (r[k])
			b = 1;
		if (b)
			_putchar(r[k] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
