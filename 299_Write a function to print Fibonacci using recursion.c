#include <stdio.h>

// Function to find nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0)
        return 0;  // Base case
    else if (n == 1)
        return 1;  // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n, i;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
