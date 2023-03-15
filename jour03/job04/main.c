#include <stdio.h>
#include <string.h>

#include "my_put.h"


int main() {
    char character = 'A';
    char str[255] = "salut";
   
    my_putchar(character);
    my_putstr(str);    

    return 0;
}

