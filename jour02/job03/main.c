#include <stdio.h>

int my_add(int a, int b);
int my_mul(int a, int b);
int my_sub(int a, int b);
float my_div(int a, int b);
int my_mod(int a, int b);

int main() {

    float first, second;

    printf("Enter first number: "); 
    scanf("%f", &first);    
    
    printf("Enter second number: "); 
    scanf("%f", &second);    

    char sign;
    printf("Enter operation: "); 
    scanf("%s", &sign);   
    

    if (sign == '+') {        
        printf("%d", my_add(first, second));        
    } else if (sign == '*') {
        int result = my_mul(first, second);
        printf("%d", result);
    } else if (sign == '-') {
        int result = my_sub(first, second);
        printf("%d", result);
    } else if (sign == '/') {
        float result = my_div(first, second);
        printf("%f", result);
    }    

    return 0;
}



int my_add(int a, int b) {
    return a + b;    
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