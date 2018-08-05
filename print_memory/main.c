#include <stdio.h>

void    print_memory(const void *addr, size_t size);

int main() {
    int tab[] = {10, 0, 16, 555, 13};
    char string[50] = "ponies ARE AWESOME \n\t\n lolz";
    //print_memory(tab, sizeof(tab));
    print_memory(string, sizeof(string) + 10000);
    return 0;
}