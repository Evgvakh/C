#include <stdio.h>
#include <string.h>

int my_putchar(char arg) {
    printf("%c\n", arg);
}

int my_putstr(char arg[255]) {
    printf("%s\n", arg);
}