#include <stdio.h>
// Function to find GCD (Greatest Common Divisor)
int findGCD(int a, int b) {
    int gcd;
    // Convert negative numbers to positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    // Loop from 1 to minimum of a and b
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    return gcd;
}
int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = findGCD(num1, num2);
    printf("GCD of %d and %d = %d\n", num1, num2, result);
    return 0;
}
