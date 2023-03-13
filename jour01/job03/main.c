#include <stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 2;

    int division = a / b;
    int multiplication = a * b;
    int addition = a + b;
    int soustraction = a - b;

    printf("Division: %d, Multiplication: %d, Addition: %d, Soustraction: %d", division, multiplication, addition, soustraction);
}