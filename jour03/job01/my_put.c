#include <stdio.h>
#include <string.h>

char character = 'A';
char str[255] = "salut";

int my_putchar(char arg) {
    printf("%c\n", arg);
}

int my_putstr(char arg[255]) {
    printf("%s\n", arg);
}