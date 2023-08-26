#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <errno.h>

#define BUF_SZ 1024
#define F_P (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * struct Elf64_Ehdr - ELF header
 * @e_ident: marks the file as an object file
 * @e_ehsize: ELF header size in byte
 * @e_entry: virtual address
 * @e_flag: processor-specific flags
 * @e_machine: specifies the required aechitecture
 * @e_phentsize: size in byte of entries in the program
 * @e_phnum: number of entries in program header table
 * @e_phoff: program header table file offset in byte
 * @e_shentsize: size in byte of the section header
 * @e_shnum: number of entries in section header table
 * @e_shoff: section header table file offset in bytes
 * @e_shstrndx: section header table indexof the entry
 * @e_type: identifies the obj file type
 * @e_version:identifies the obj file version
 * Return: Nothing
 */
typedef struct Elf64_Ehdr
{
	unsigned char e_ident[16];
	uint16_t	e_ehsize;
	uint16_t	e_entry;
	uint16_t	e_flag;
	uint16_t	e_machine;
	uint16_t	e_phentsize;
	uint16_t	e_phnum;
	uint16_t	e_phoff;
	uint16_t	e_shentsize;
	uint16_t	e_shnum;
	uint16_t	e_shoff;
	uint16_t	e_shstrndx;
	uint16_t	e_type;
	uint16_t	e_version;
} Elf64_Ehdr;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_err(int fd);

#endif
