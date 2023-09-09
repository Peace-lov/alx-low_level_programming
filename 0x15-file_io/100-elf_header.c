#include "main.h"
/**
 * p_err - Prints error to stdout
 * @err_message: The error message to print
 * Return: Nothing
 */
void p_err(const char *err_message)
{
	dprintf(STDERR_FILENO, "%s\n", err_message);
}
/**
 * elf_header - prints elf header information
 * @name: pointer
 *
 * Return: Nothing
 */
void elf_header(const char *name)
{
	Elf64_Ehdr h;
	int f_d = open(name, O_RDONLY);

	if (f_d == -1)
	{
		p_err("Error opening file.");
	}
	if (read(f_d, &h, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		p_err("Error reading ELF header.");
	}
	if (h.e_ident[0] != 0x7F || h.e_ident[1] != 'E'
	|| h.e_ident[2] != 'L' || h.e_ident[3] != 'F')
	{
		p_err("Not an ELF file.");
	}

	printf("Magic: %02x %02x %02x %02x\n", h.e_ident[0],
	h.e_ident[1], h.e_ident[2], h.e_ident[3]);
	printf("Class: %d-bit\n", h.e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", h.e_ident[5] == 1 ? "Little-endian" :
	"Big-endian");
	printf("Version: %d\n", h.e_ident[6]);
	printf("OS/ABI: %d\n", h.e_ident[7]);
	printf("ABI Version: %d\n", h.e_ident[8]);
	printf("Type: %d\n", h.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)h.e_entry);

	close(f_d);
}
/**
 * main - checks the code
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
		return (1);
	}

	elf_header(av[1]);

	return (0);
}
