#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: Name of file
 * @letters: number of letters in the file
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desp;
	ssize_t bytrd, bytwrt;
	char *buf;

	if (filename == NULL)
		return (0);
	file_desp = open(filename, O_RDONLY);
	if (file_desp < 0)
	{
		return (0);
	}
	buf = mallo(sizeof(char) * letters);

	bytrd = read(file_desp, buf, letters);

	bytwrt = write(STDOUT_FILENO, buf, bytrd);

	free(buf);

	close(file_desp);

	return (bytwrt);
}
