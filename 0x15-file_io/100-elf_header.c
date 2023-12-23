#include "main.h"

/**
 * printf_elf_header - Displays the required sections.
 * @header: pointer to the Elf64_Ehdr type
 *
 * Return: nothing
 **/
void printf_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:    ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);
	printf("\nClass:                             %s",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("\nData:                              %s",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian"
			: "2's complement, big endian");
	printf("\nVersion:                           %d",
			header->e_ident[EI_VERSION]);
	printf("\nOS/ABI:                            %d", header->e_ident[EI_OSABI]);
	printf("\nABI Version:                       %d",
			header->e_ident[EI_ABIVERSION]);
	printf("\nType:                              %d", header->e_type);
	printf("\nEntry point address:               %lx", header->e_entry);
	printf("\nFormat:                            ELF%d\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file
 * @argc: Argument count
 * @argv: Argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		exit(98);
	}
	printf_elf_header(&elf_header);
	if (close(fd))
	{
		fprintf(stderr, "Error: Cannot close file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}
