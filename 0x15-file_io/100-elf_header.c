#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

typedef struct
{
        uint8_t elf_magic[16];
        uint32_t elf_version;
        uint16_t elf_type;
        uint64_t elf_entry;
} elf_header;
void print_error(const char *error_message)
{
        int k = 0;

        while (error_message[k] != '\0')
        {
                k++;
        }

        write(STDERR_FILENO, error_message, k);
        write(STDERR_FILENO, "\n", 1);
        exit(98);
}
int main(int argc, char *argv[])
{
        int elfd;
        off_t posn;
        int t = 0;
        elf_header e_header;
        ssize_t bytes_read;

        if (argc != 2)
        {
                print_error("ELF not provided");
        }
        elfd = open(argv[1], O_RDONLY);
        if (elfd == -1)
        {
                print_error("failed to read file");
        }
        posn = lseek(elfd, 0, SEEK_SET);
        if (posn == -1)
        {
                close(elfd);
                print_error("failed to set offset");
        }
        bytes_read = read(elfd, &e_header, sizeof(elf_header));
        if (bytes_read == -1)
        {
                close(elfd);
                print_error("failed to read"); }
        printf("Magic: ");
        while (t < 16)
        {
                printf("%02x ", e_header.elf_magic[t]);
                t++; }
        printf("\n");
        printf("Version: 0x%08x\n", e_header.elf_version);
        printf("Type: 0x%04x\n", e_header.elf_type);
        printf("Entry point address: 0x%016lx\n", e_header.elf_entry);
        close(elfd);
        return (0);
}
