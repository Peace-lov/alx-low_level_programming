#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: Name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, i = 0, len = 0;
	int bywrt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			len = i++;
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	bywrt = write(file_descriptor, text_content, len);

	close(file_descriptor);

	return (1);
}
