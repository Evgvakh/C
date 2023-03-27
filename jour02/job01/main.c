#include <stdio.h>

void my_add(int a, int b);
void my_mul(int a, int b);
void my_sub(int a, int b);
void my_div(int a, int b);
void my_mod(int a, int b);

int main() {

    my_add(2, 3);
    my_mul(3, 4);
    my_sub(55, 11);
    my_div(40, 12);
    my_mod(15, 4);

    return 0;
}



void my_add(int a, int b) {
    int res = a + b;
    printf("Add: %d \n", res);
}

void my_mul(int a, int b) {
    int res = a * b;
    printf("Mult: %d \n", res);
}

void my_sub(int a, int b) {
    int res = a - b;
    printf("Sub: %d \n", res);
}

void my_div(int a, int b) {
    float res = a * 1.00 / b;
    printf("Div: %f \n", res);
}

void my_mod(int a, int b) {
    int res = a % b;
    printf("Div: %d \n", res);
}
