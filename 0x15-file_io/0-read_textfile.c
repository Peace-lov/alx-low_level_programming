#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: number of letters in the file
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t byread, bywrite;
	char *buff;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters));

	if (buff == NULL)
		return (0);
	byread = read(file_descriptor, buff, letters);

	if (byread < 0)
		return (0);
	bywrite = write(STDOUT_FILENO, buff, byread);

	if (bywrite < 1)
		return (0);

	close(file_descriptor);

	free(buff);

	return (bywrite);
}
