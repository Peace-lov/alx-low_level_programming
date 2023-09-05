#include "main.h"
/**
 * elf_header - prints elf header information
 * @name: pointer
 *
 * Return: Nothing
 */
void elf_header(const char *name)
{
	Elf64_Ehdr h;
	int f_d = (name, O_RDONLY);

	if (fd == -1)
	{
		printf("Error opening file.\n");
		exit(98);
	}
	if (read(f_d, &hder, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		printf("Error reading ELF header.\n");
		close(f_d);
		exit(98);
	}
	if (h.e_ident[0] != 0x7F ||
			h.e_ident[1] != 'E' ||
			h.e_ident[2] != 'L' ||
			h.e_ident[3] != 'F')
	{
		printf("Not an ELF file.\n");
		close(f_d);
		exit(98);
	}
	printf("Magic: %02x %02x %02x %02x\n", h.e_ident[0], h.e_ident[1], h.e_ident[2], h.e_ident[3]);
	printf("Class: %d-bit\n", h.e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", h.e_ident[5] == 1 ? "Little-endian" : "Big-endian");
	printf("Version: %d\n", h.e_ident[6]);
	printf("OS/ABI: %d\n", h.e_ident[7]);
	printf("ABI Version: %d\n", h.e_ident[8];
	printf("Type: %d\n", h.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long) h.e_entry);
	close(f_d);
}
/**
 * main - check for Elf file
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("Usage: %s elf_filename\n", av[0]);
		return (1);
	}

	elf_header(av[1]);

	return (0);
