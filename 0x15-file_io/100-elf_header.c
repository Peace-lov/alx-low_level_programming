#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/**
 * is_elf - function that shows the file is an ELF file
 * @e_ident: A pointer to ELF magic numbers
 * Return: Nothing
 */

void is_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if ((e_ident[index] != 'E') && (e_ident[index] != 'L') &&
		    (e_ident[index] != 'F') && (e_ident[index] != 127))
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
	}
}

/**
 * magic_num - function that prints the magic numbs. of an ELF header
 * @e_ident: A pointer to ELF magic numbers
 * Return: Nothing
 */

void magic_num(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - function that prints the class of an ELF header
 * @e_ident: A pointer to array of ELF class
 * Return: Nothing
 */

void class_print(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_printer - function that prints the data of an ELF header
 * @e_ident: A pointer to array of ELF class
 * Return: Nothing
 */

void data_printer(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * version_printer - function that prints the version of ELF header
 * @e_ident: pointer to array of ELF version
 * Return: Nothing
 */

void version_printer(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}


/**
 * os_abi_printer - function that prints the ELF header.
 * @e_ident: pointer to array of ELF version.
 * Return: Nothing
 */

void os_abi_printer(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi_printer - function that prints the version of ELF header.
 * @e_ident: pointer to array of ELF ABI version.
 * Return: Nothing
 */

void abi_printer(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * type_printer - function that prints the type ELF header
 * @e_ident: ELF pointer to array
 * @e_type: ELF type.
 * Return: Nothing
 */

void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_pt - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: pointer to array of ELF class.
 * Return: Nothing
 */

void entry_pt(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function that closes ELF file
 * @elf: The file descriptor of an ELF file
 * Return: Nothing
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main program that displays the information in ELF header
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 * Return: int 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);

	int rd;
	Elf64_Ehdr *header;
	(void)argc;

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(header->e_ident);
	printf("ELF Header:\n");
	magic_num(header->e_ident);
	class_print(header->e_ident);
	data_printer(header->e_ident);
	version_printer(header->e_ident);
	os_abi_printer(header->e_ident);
	abi_printer(header->e_ident);
	type_printer(header->e_type, header->e_ident);
	entry_pt(header->e_entry, header->e_ident);
	free(header);
	close_elf(fd);
	return (0);
}
