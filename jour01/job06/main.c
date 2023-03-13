#include <stdio.h>

int main() {
    float a = 12.14f;
    float b = 26.76f;

    float division = a * 1.00 / b;
    float multiplication = a * b;
    float addition = a + b;
    float soustraction = a - b;

    printf("Division: %.3f, Multiplication: %.3f, Addition: %.3f, Soustraction: %.3f", division, multiplication, addition, soustraction);
}