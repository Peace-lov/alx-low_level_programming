#include "main.h"
/**
 * exit_err - Exits error
 * @fd - close fd
 * Return: Returns nothing
 */
void exit_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 *
 * main - checks my code(cd)
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int fd_f, fd_t;
	char buf[BUF_SZ];
	ssize_t bytrd;
	const char *file_from = av[1], *file_to = av[2];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_f = open(file_from, O_RDONLY);
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, F_P);
	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytrd = read(fd_f, buf, BUF_SZ)) > 0)
	{
		if (write(fd_t, buf, bytrd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_f) == -1 || close(fd_t) == -1)
		exit_err(fd_f), exit_err(fd_t);
	return (0)
}
