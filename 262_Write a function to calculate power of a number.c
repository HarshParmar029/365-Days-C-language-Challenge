#include <stdio.h>
// Function to calculate power of a number (base^exponent)
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}
int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));
    return 0;
}
