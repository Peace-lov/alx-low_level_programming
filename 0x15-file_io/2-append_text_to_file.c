#include "main.h"
/**
 * append_text_to_file - function that appends text at the
 * end of a file
 * @filename: Name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desp, write_file, i = 0, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			len = i++;
		}
	}
	file_desp = open(filename, O_WRONLY | O_APPEND);

	write_file = write(file_desp, text_content, len);

	if (file_desp == -1 || write_file == -1)
		return (-1);
	close(file_desp);
	return (1);
}
