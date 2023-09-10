#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

/**
 * struct ElfHeader - ELF Header structure
 * @magic:     Magic bytes identifying ELF format
 * @class:     ELF class (32-bit or 64-bit)
 * @data:      Data encoding (little-endian or big-endian)
 * @version:   ELF version
 * @osabi:     OS/ABI identifier
 * @abiversion: ABI version
 * @pad:       Padding bytes
 * @type:      ELF file type
 * @machine:   Target architecture
 * @version2:  ELF version (reserved)
 * @entry:     Entry point address
 * @phoff:     Program header table offset
 * @shoff:     Section header table offset
 * @flags:     Processor-specific flags
 * @ehsize:    Size of this ELF header
 * @phentsize: Size of a program header table entry
 * @phnum:     Number of program headers
 * @shentsize: Size of a section header table entry
 * @shnum:     Number of section headers
 * @shstrndx:  Section header string table index
 */
typedef struct ElfHeader
{
    uint8_t magic[4];
    uint8_t class;
    uint8_t data;
    uint8_t version;
    uint8_t osabi;
    uint8_t abiversion;
    uint8_t pad[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version2;
    uint64_t entry;
    uint64_t phoff;
    uint64_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
} ElfHeader;

/**
 * print_elf_header - Print ELF header information
 * @header: Pointer to the ELF header
 */
void print_elf_header(const ElfHeader *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("  Class:   ");
    switch (header->class)
    {
    case 1:
        printf("ELF32\n");
        break;
    case 2:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %d>\n", header->class);
        break;
    }
    printf("  Data:    ");
    switch (header->data)
    {
    case 1:
        printf("2's complement, little endian\n");
        break;
    case 2:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %d>\n", header->data);
        break;
    }
    printf("  Version: %d (current)\n", header->version);
    printf("  OS/ABI:  ");
    switch (header->osabi)
    {
    case 0:
        printf("UNIX - System V\n");
        break;
    case 6:
        printf("UNIX - Solaris\n");
        break;
    case 9:
        printf("UNIX - NetBSD\n");
        break;
    default:
        printf("<unknown: %d>\n", header->osabi);
        break;
    }
    printf("  ABI Version: %d\n", header->abiversion);
    printf("  Type:    ");
    switch (header->type)
    {
    case 1:
        printf("REL (Relocatable file)\n");
        break;
	case 2:
        printf("EXEC (Executable file)\n");
        break;
    case 3:
        printf("DYN (Shared object file)\n");
        break;
    default:
        printf("<unknown: %d>\n", header->type);
        break;
    }
    printf("  Entry point address: 0x%lx\n", header->entry);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 98;
    }

    ElfHeader header;
    ssize_t n = read(fd, &header, sizeof(ElfHeader));
    if (n != sizeof(ElfHeader))
    {
        perror("Error reading ELF header");
        close(fd);
        return 98;
    }

    // Check if it's a valid ELF file
    if (header.magic[0] != 0x7f || header.magic[1] != 'E' || header.magic[2] != 'L' || header.magic[3] != 'F')
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header(&header);

    close(fd);
    return 0;
}
