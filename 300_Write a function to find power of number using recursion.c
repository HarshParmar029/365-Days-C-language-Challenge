#include <stdio.h>

// Function to find power using recursion
int power(int base, int exp) {
    if (exp == 0)
        return 1;  // Base case: any number to power 0 is 1
    else
        return base * power(base, exp - 1);  // Recursive step
}

int main() {
    int base, exp;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Print result
    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}

