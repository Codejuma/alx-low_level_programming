#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the information contained in the ELF header
 * at the start of an ELF file
 * @argc: argument number
 * @argv: argument array
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd, read_bytes;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(SE, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(SE, "Can't open file %s\n", argv[1]);
		exit(98);
	}
	read_bytes = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (read_bytes == -1)
	{
		dprintf(SE, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(SE, "Not an ELF file - %s\n");
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %x %x %x %x\n", elf_header.e_ident[EI_MAG0],
		elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2],
		elf_header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
		elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d %s\n",
		elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            %s\n",
		elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - System V");
	printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		elf_header.e_type == ET_NONE ? "NONE (None)" :
		elf_header.e_type == ET_REL ? "REL (Relocatable file)" :
		elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" :
		elf_header.e_type == ET_DYN ? "DYN (Shared object file)" :
		elf_header.e_type == ET_CORE ? "CORE (Core file)" : "Unknown");

	printf("  Entry point address:               0x%lx\n", &elf_header.e_start);

	return (0);
}
