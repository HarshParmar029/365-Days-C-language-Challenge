#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while(binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    return decimal;
}

int main() {
    long long binary;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert and display result
    printf("Decimal: %d\n", binaryToDecimal(binary));

    return 0;
}

