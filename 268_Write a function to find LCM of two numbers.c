#include <stdio.h>
// Function to find GCD (used for LCM calculation)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to find LCM using GCD
int findLCM(int a, int b) {
    // Handle negative inputs
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // LCM formula: (a * b) / GCD
    return (a * b) / findGCD(a, b);
}
int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = findLCM(num1, num2);

    printf("LCM of %d and %d = %d\n", num1, num2, result);
    return 0;
}
