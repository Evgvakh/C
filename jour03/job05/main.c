#include <stdio.h>

int horis(lar, hau) {
    vert(hau);
    printf("%c\n", '-');    
    if (lar > 1) {
        horis(lar-1, hau);
    }
}

int vert(arg) {    
    if(arg > 1) {
        printf("%c", '-');
        vert(arg - 1);
    }
}

int main() {
    horis(3, 8);    

    return 0;
}