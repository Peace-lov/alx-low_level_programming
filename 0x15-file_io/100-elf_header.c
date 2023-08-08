#include "main.h"
/**
 * elf_header - prints elf header information
 * @h: pointer
 *
 * Return: Nothing
 */
void elf_header(const Elf64_Ehdr *h)
{
	int c = 0;

	printf("Magic: ");
	while (c < 16)
	{
		printf("%02x ", h->e_ident[c]);
		c++;
	}
	printf("\nClass: %d-bit\n", h->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", h->e_ident[5] == 1 ? "little" : "big");
	printf("Version: %d\n", h->e_version);
	printf("OS/ABI: %d\n", h->e_ident[7]);
	printf("ABI Version: %d\n", h->e_ident[8]);
	printf("Type: %d\n", h->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)h->e_entry);
}
/**
 * main - check for Elf file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr h;
	int file_des;
	ssize_t rd_byt;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	file_des = open(argv[1], O_RDONLY);

	if (file_des == -1)
	{
		perror("Error ");
		return (98);
	}

	rd_byt = read(file_des, &h, sizeof(Elf64_Ehdr));

	if (rd_byt != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error\n");
		close(file_des);
		return (98);
	}
	elf_header(&h);

	close(file_des);
	return (0);
}
