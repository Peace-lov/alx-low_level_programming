#include "main.h"
/**
 * exit_err - Exits error
 * @f_d: close fd
 * Return: Returns nothing
 */
void exit_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
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
	const char *file_from = av[1], *file_to = av[2];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, F_P);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytrd = read(fd_from, buf, BUF_SZ)) > 0)
	{
		if (write(fd_to, buf, bytrd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_err(fd_from);
		exit_err(fd_to);
	}
	return (0);
}
