#include "main.h"
/**
 * exit_err - Exits error
 * @cd: code
 * @words: arguments
 * Return: Returns nothing
 */
void exit_err(int cd, const char *words)
{
	dprintf(STDERR_FILENO, "Error: %s\n", words);
	exit(cd);
}

/**
 * main - checks my code(cd)
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;
	char buf[BUF_SZ];
	ssize_t bytrd;
	const char *file_from = av[1];
	const char *file_to = av[2];

	if (ac != 3)
	{
		exit_err(97, "Usage: cp file_from file_to");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_err(98, "Can't read from file av[1]");
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, F_P);
	if (fd_to == -1)
	{
		exit_err(99, "Can't write to file av[2]");
	}
	while ((bytrd = read(fd_from, buf, BUF_SZ)) > 0)
	{
		if (write(fd_to, buf, bytrd) == -1)
		{
			exit_err(99, "Can't write to file av[2]");
		}
	}
	if (bytrd == -1)
	{
		exit_err(98, "Can't read from file av[1]");
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_err(100, "Can't close fd FD_VALUE");
	}
	return (0);
}
