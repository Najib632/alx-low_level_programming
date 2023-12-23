#include "main.h"

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
		exit(97);
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
	close(fd);
	return (0);
}
