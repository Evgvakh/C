#include <stdio.h>

int main() {
    int var;
    
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    float division = a * 1.0 / b;
    int multiplication = a * b;
    int addition = a + b;
    int soustraction = a - b;

    printf("Division: %.2f, Multiplication: %d, Addition: %d, Soustraction: %d", division, multiplication, addition, soustraction);
}