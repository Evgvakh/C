int main() {
    int a, b;
    a = 520000;
    b = 100000;

    float division = a * 1.00 / b;
    long int multiplication = a * b;
    int addition = a + b;
    int soustraction = a - b;

    printf("Division: %.1f, Multiplication: %d, Addition: %d, Soustraction: %d", division, multiplication, addition, soustraction);
}