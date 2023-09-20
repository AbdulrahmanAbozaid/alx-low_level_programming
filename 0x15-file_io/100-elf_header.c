#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr *h);

/**
 * put_magic -  put a magic
 * @fh: file handle
 */

void put_magic(Elf64_Ehdr fh)
{
	int j;

	printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
		printf("%2.2x%s", fh.e_ident[j], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * put_class -  put a magic
 * @fh: file handle
 */

void put_class(Elf64_Ehdr fh)
{
	printf("  Class:                             ");
	switch (fh.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF632");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * put_data -  put a magic
 * @fh: file handle
 */

void put_data(Elf64_Ehdr fh)
{
	printf("  Data:                              ");
	switch (fh.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * put_version -  put a magic
 * @fh: file handle
 */

void put_version(Elf64_Ehdr fh)
{
	printf("  Version:                           %d", fh.e_ident[EI_VERSION]);

	switch (fh.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
			break;
	}
	printf("\n");
}

/**
 * put_type -  put a magic
 * @fh: file handle
 */

void put_type(Elf64_Ehdr fh)
{
	char *pr = (char *)&h.e_type;
	int c = 0;

	printf("  Type:                              ");
	if (fh.e_ident[EI_VERSION] == ELFDATA2MSB)
		c = 1;

	switch (p[c])
	{
		case ET_NONE:
			printf("NONE (None)");
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
			printf("<unknown>: %x", p[c]);
			break;
	}
	printf("\n");
}

/**
 * put_entry - put an entry
 * @fh: file handle
 */
void put_entry(Elf64_Ehdr fh)
{
	int i = 0, l = 0;
	unsigned char *pc = (unsigned char *)&fh.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!pc[i])
		{
			i--;
		}
		printf("%x", pc[i--]);
		for (; i >= 0; i--)
			printf("%02x", pc[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!pc[i])
			i++;
		printf("%x", pc[i++]);
		for (; i <= l; i--)
			printf("%02x", pc[i]);
		printf("\n");
	}
}

/**
 * put_abiversion -  put a magic
 * @fh: file handle
 */

void put_abiversion(Elf64_Ehdr fh)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * put_osabi -  put a magic
 * @fh: file handle
 */

void put_osabi(Elf64_Ehdr fh)
{
	printf("  OS/ABI:                            ");

	switch (fh.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP_UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NETBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more();
	}
	printf("\n");
}

/**
 * print_osabi_more -  put a magic
 * @fh: file handle
 */

void print_osabi_more(Elf64_Ehdr fh)
{
	switch (fh.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success and 1 on error
 */

int main(int argc, char **argv)
{
	int file;
	Elf64_Ehdr fh;
	ssize_t size;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	size = read(file, &fh, sizeof(fh));
	if (size < 1 || size < sizeof(fh))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (fh.e_ident[0] == 0x7f && fh.e_ident[1] == 'E'
			&& fh.e_ident[2] == 'L' && fh.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	put_magic(fh);
	put_class(fh);
	put_data(fh);
	put_version(fh);
	put_osabi(fh);
	put_abiversion(fh);
	put_type(fh);
	put_entry(fh);

	if (close(file))
		dprintf(STDERR_FILENO, "Error closing file descrptor: %d\n", file), exit(98);
	return (EXIT_SUCCESS);
}

