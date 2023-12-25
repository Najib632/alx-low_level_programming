#include "main.h"

/**
 * elf_hclass - Displays Elf class type.
 * @header: pointer to Elf64_Ehdr type
 *
 * Return: Nothing
 **/
void elf_hclass(Elf64_Ehdr *header)
{
	printf("\n  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("NONE");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown: %x>", header->e_ident[EI_CLASS]);
	}
}

/**
 * elf_data - Displays Elf data type
 * @header: pointer to Elf64_Ehdr type
 *
 * Return: Nothing
 **/
void elf_data(Elf64_Ehdr *header)
{
	printf("\n  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("NONE");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>", header->e_ident[EI_DATA]);
	}
}

/**
 * elf_osabi - Displays OS/ABI information
 * @header: pointer to Elf64_Ehdr type
 *
 * Return: Nothing
 **/
void elf_osabi(Elf64_Ehdr *header)
{
	printf("\n  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		default:
			printf("<unknown: %x>", header->e_ident[EI_OSABI]);
	}
}

/**
 * printf_elf_header - Displays the required sections.
 * @header: pointer to the Elf64_Ehdr type
 *
 * Return: nothing
 **/
void printf_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("\n  Magic:  ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);
	elf_hclass(header);
	elf_data(header);
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf("\n  Version:                           %d (current)", EV_CURRENT);
	else
		printf("\n  Version:                           %d", EV_NONE);
	elf_osabi(header);
	printf("\n  ABI Version:                       %d",
			header->e_ident[EI_ABIVERSION]);
	printf("\n  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (none)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown: %x>", header->e_type);
	}
	printf("\n  Entry point address:               %#x\n",
			(unsigned int)header->e_entry);
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
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:");
	printf_elf_header(&elf_header);
	if (close(fd))
	{
		fprintf(stderr, "Error: Cannot close file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}
