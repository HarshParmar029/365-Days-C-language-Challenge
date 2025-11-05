#include <stdio.h>
// Function to find GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;  // Base case
    else
        return gcd(b, a % b);  // Recursive call
}

int main() {
    int num1, num2;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print result
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
