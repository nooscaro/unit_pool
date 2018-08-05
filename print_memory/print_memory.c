#include <unistd.h>

const size_t g_nbytes = 16;

void    print_hex(const unsigned char nbr)
{
    unsigned int div;
    unsigned int mod;
    unsigned char ch;

    div = nbr / 16;
    mod = nbr % 16;
    if (div > 9)
        ch = div + 'a' - 10;
    else
        ch = div + '0';
    write(1, &ch, 1);
    if (mod > 9)
        ch = mod + 'a' - 10;
    else
        ch = mod + '0';
    write(1, &ch, 1);
}

void    print_padding(size_t size)
{
    while (size--)
        write(1, " ", 1);
}

void    print_ascii(const unsigned char *addr, size_t size)
{
    size_t i;
    unsigned char current;

    i = 0;
    while (i < size)
    {
        current = (unsigned char)addr[i];
        if (current > 31 && current < 127)
            write(1, &current, 1);
        else
            write(1, ".", 1);
        i++;
    }
}

void    print_line(const void *addr, size_t size)
{
    size_t i;
    const unsigned char *char_addr;
    size_t padding;

    i = 0;
    padding = 40;
    char_addr = (const unsigned char *)addr;
    while (i < size)
    {
        print_hex(char_addr[i]);
        if (i % 2)
        {
            write(1, " ", 1);
            padding--;
        }
        padding -= 2;
        i++;
    }
    print_padding(padding);
    print_ascii(char_addr, size);
    write(1, "\n", 1);
}

void    print_memory(const void *addr, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size)
    {
        if (size - i > g_nbytes)
            print_line(addr + i, g_nbytes);
        else
            print_line(addr + i, size - i);
        i += g_nbytes;
    }
}