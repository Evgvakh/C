#include <stdio.h>

int my_add(int a, int b);
int my_mul(int a, int b);
int my_sub(int a, int b);
float my_div(int a, int b);
int my_mod(int a, int b);

int main() {

    int add = my_add(2, 3);
    int mul = my_mul(3, 4);
    int sub = my_sub(55, 11);
    float div = my_div(40, 12);
    int mod = my_mod(15, 4);

    printf("Results: %d, %d, %d, %f, %d", add, mul, sub, div, mod);
    
    return 0;
}



int my_add(int a, int b) {
    int res = a + b;
    return res;    
}

int my_mul(int a, int b) {
    int res = a * b; 
    return res;    
}

int my_sub(int a, int b) {
    int res = a - b;  
    return res;   
}

float my_div(int a, int b) {
    float res = a * 1.00 / b;   
    return res;  
}

int my_mod(int a, int b) {
    int res = a % b;    
    return res; 
}
